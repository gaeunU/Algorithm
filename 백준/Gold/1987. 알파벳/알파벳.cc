#include <iostream>
#include <vector>

using namespace std;
int n, m,maxi=-2147000000;
int map[21][21];
int ch[21][21];
int arr[26];
int dx[4] = {0,-1,0,1};
int dy[4] = {1,0,-1,0};

void dfs(int x,int y, int sum) {
    int xx, yy;
    
    if (sum > maxi) maxi = sum;

    for (int i = 0; i < 4; i++) {
        xx = x + dx[i];
        yy = y + dy[i];

        
        if (xx >= n || xx < 0 || yy >= m || yy < 0) continue;
        
        int next = map[xx][yy];
        
        if (arr[next] == 0) {
            arr[next] = 1;
            dfs(xx, yy,sum+1);
            arr[next] = 0;
        }
        
        
    }

}

int main(int argc, const char* argv[]) {

    ios_base::sync_with_stdio(false);
    
    string str;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> str;
        for (int j = 0; j < m; j++) {
            // A 부터 1 ~
            map[i][j] = str[j]-64;
            
        }
    }

    arr[map[0][0]] = 1;

    dfs(0,0,1);
    cout <<maxi;

    return 0;
}