#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
int dx[4] = { 0,-1,0,1 };
int dy[4] = { 1,0,-1,0 };

int ch[30][30], map[30][30];

int cnt;
vector<int> cntvec;
int n;

void dfs(int x, int y) {
    int xx, yy;

    for (int i = 0; i <4; i++) {

            xx = x + dx[i];
            yy = y + dy[i];

            // 격자판 범위를 벗어났다.
            if (xx >=n || xx<0 || yy>=n || yy <0) continue;

            if (map[xx][yy] == 1 && ch[xx][yy] == 0) {
                ch[xx][yy] = 1;
                cnt += 1; // 땅의 크기
                dfs(xx, yy);
            }
     }
    
}

int main(int argc, const char* argv[]) {

    ios_base::sync_with_stdio(false);
    
    int res =0;
    string str;

    cin >> n;

    //map 이 띄어쓰기로 입력받아지는게 아니라
    // 한번에 입력받아져서 string으로 받아야함 !! ㅠ
    for (int i = 0; i < n; i++) {
        cin >> str;
        for (int j = 0; j < str.size(); j++) {           
            if (str[j] == '1') map[i][j] = 1;
            else map[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // 집을 찾았다.
            if (ch[i][j] == 0 && map[i][j] == 1) {
                ch[i][j] = 1;
                cnt = 1;
                dfs(i, j); // 집의 영역을 계산하러 떠나려무나
                cntvec.push_back(cnt);
                res++;
            }
        }
    }

    sort(cntvec.begin(), cntvec.end());

    cout << res << '\n';
    
    for (int i = 0; i < cntvec.size(); i++) 
        cout << cntvec[i] << '\n';

    return 0;
}