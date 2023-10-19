#include <iostream>
#include <vector>

using namespace std;
int n,m,maxi=-2147000000;
int map[101][101];
int input[101][101];

int ch[101][101];

int dx[4] = {0,-1,0,1};
int dy[4] = {1,0,-1,0};

void dfs(int x, int y) {
    int xx, yy;

    for (int i = 0; i < 4; i++) {

        xx = x + dx[i];
        yy = y + dy[i];

        // 격자판 범위를 벗어났다.
        if (xx >= n || xx < 0 || yy >= n || yy < 0) continue;

        if (map[xx][yy]==1 && ch[xx][yy] == 0) {
            ch[xx][yy] = 1;
            dfs(xx, yy);
        }
    }
    
}
void reset() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            map[i][j] = 0;
            ch[i][j] = 0;
        }
    }
}

int main(int argc, const char* argv[]) {

    ios_base::sync_with_stdio(false);

    int a, b,answer=-2147000000,res;

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a;
            input[i][j] = a;
            maxi = max(a, maxi);
        }
    }
    // 물에 잠기는 지점
    
    // k 는 수위
    for (int k = 0; k <= maxi; k++) {
        
        res = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (input[i][j] <= k) map[i][j] = 0;
                else map[i][j] = 1;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                // 집을 찾았다.
                if (ch[i][j] == 0 && map[i][j]==1) {
                    ch[i][j] = 1;
                    dfs(i, j); 
                    res += 1;
                }
            }
        }
        reset();
        answer = max(answer, res);
    }

    cout << answer<<'\n';

    return 0;
}