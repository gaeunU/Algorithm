#include<iostream>
#include<algorithm>
#include <vector>

using namespace std;

int n, m, k,cnt;
int map[1002][1002], ch[1002][1002];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

void dfs(int x, int y) {
	
	int xx, yy;

	for (int i = 0; i < 4; i++) {
		xx = x + dx[i];
		yy = y + dy[i];

		if (xx<1 || xx>n || yy<1 || yy>m) continue;
		
		if (ch[xx][yy] == 0 && map[xx][yy] == 1) {
			ch[xx][yy] = 1;
			cnt += 1;
			dfs(xx, yy);
		}
	}
	

}

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	cin >> n>>m>>k;

	int a, b,answer=0;

	// 음식물이 떨어진 좌표엔 1
	for (int i = 1; i <= k; i++) {
		cin >> a >> b;
		map[a][b] = 1;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (ch[i][j] == 0 && map[i][j]==1) {
				cnt = 1;
				ch[i][j] = 1;
				dfs(i, j);
				answer = max(answer, cnt);
			}
		}
	}
	cout << answer;

	return 0;
}