#include <iostream>
#include <vector>

using namespace std;
int map[51][51];
int ch[51][51];
int n, m, k;

int dx[4] = {0,-1,0,1};
int dy[4] = {1,0,-1,0};

void dfs(int x, int y) {
    
    int xx, yy;

    for (int i = 0; i < 4; i++) {
        
        xx = x + dx[i];
        yy = y + dy[i];

        // 범위를 벗어나면 겟아웃~
        if (xx >= n || xx < 0 || yy >= m || yy < 0)continue;

        if (ch[xx][yy] == 0 && map[xx][yy] == 1) {
            ch[xx][yy] = 1;
            dfs(xx, yy);
        }
    }

}



int main(int argc, const char* argv[]) {

    ios_base::sync_with_stdio(false);
    int Test, cnt,a,b;
    
    cin >> Test;

    for (int t = 0; t < Test; t++) {
        
        // 배추밭의 가로길이 , 세로길이, 배추가 심어진 위치의 수
        cin >> n >> m >> k;

        // map 과 체크 배열 리셋
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                map[i][j] = 0;
                ch[i][j] = 0;
            }
        }
        
        // 배추가 심어진 곳 담기
        for (int i = 0; i < k; i++) {
            cin >> a >> b;
            map[a][b] = 1;
        }

        cnt = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (ch[i][j] == 0 && map[i][j] == 1) {
                    ch[i][j] = 1;
                    cnt++; // 배추밭의 수 체크
                    dfs(i, j);
                }
            }
        }

        cout << cnt << '\n';
        
    }

    return 0;
}