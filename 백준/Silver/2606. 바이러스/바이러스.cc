#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int map[101][101];
int ch[101];
int cnt = 0,n,m;

void dfs(int v) {
    
    
        for (int i = 1; i <= n; i++) {
            if (ch[i] == 0 && map[v][i]==1) {
                ch[i] = 1;
                cnt += 1;
                dfs(i);
            }
        }
    
}


int main(int argc, const char* argv[]) {

    ios_base::sync_with_stdio(false);

 // FILE* p_file = NULL;
 // freopen_s(&p_file,"input.txt", "rt", stdin);
    
    int i,a,b;

    cin >> n >> m;

    for (i = 0; i < m; i++) {
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }

    ch[1] = 1;
    dfs(1);

    cout << cnt << '\n';

    return 0;
}