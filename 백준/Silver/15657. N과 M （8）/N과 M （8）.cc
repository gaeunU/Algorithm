#include<iostream>
#include<algorithm>

#define MAX 9

using namespace std;

int n, m;
int map[MAX] = { 0, };
int arr[MAX] = { 0, };
bool flag[MAX];

void dfs(int num, int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	else {
		for (int i = num; i <= n; i++) {
			// 방문 했는지 여부를 따지지 않는다.
			// 그러면 내 노드도 중복으로 방문한다.
				arr[cnt] = map[i-1]; // 정렬한 n값을 arr 에 저장.
				dfs(i, cnt + 1); // 더 깊게. m 까지 들어가자.
		}
	}


}

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> map[i];
	}
	
	sort(map, map+n);

	dfs(1, 0);

	return 0;
}