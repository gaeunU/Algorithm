#include <iostream>
#include <vector>

using namespace std;

int map[101][101];
int ch[101][101];

int dx[4] = { 0,-1,0,1 };
int dy[4] = { 1,0,-1,0 };

int n;

void dfs(int x, int y) {
    
    int xx, yy;

    for (int i = 0; i < 4; i++) {
        xx = x + dx[i];
        yy = y + dy[i];


        // 격자 범위를 벗어나가면 넘어가유
        if (xx < 0 || xx >= n || yy < 0 || yy >= n) continue;

        if (ch[xx][yy] == 0 && map[xx][yy]==map[x][y]) {
            ch[xx][yy]=1;
            dfs(xx, yy);
        }
    }
}

int main(int argc, const char* argv[]) {

    ios_base::sync_with_stdio(false);

    string str;
    int cnt1 = 0, cnt2 = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str;
        for (int j = 0; j < str.size(); j++) {
            if (str[j] == 'R') map[i][j] = 1;
            else if (str[j] == 'G') map[i][j] = 2;
            else map[i][j] = 3;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (ch[i][j] == 0) {
                ch[i][j] = 1;
                cnt1 += 1;
                dfs(i, j);
            }
        }  
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ch[i][j] = 0;
            // 적록색약 자리는 0으로 바꿔놓아요
            if (map[i][j] < 3) map[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (ch[i][j] == 0) {
                ch[i][j] = 1;
                cnt2 += 1;
                dfs(i, j);
            }
        }
    }

    cout << cnt1 << " " << cnt2;

    return 0;
}