#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int ch[1001];
int n,m,x;
int map[1001][1001];
queue<int> Q;

void dfs(int x) {
    ch[x] = 1;
    
    if (ch[x] == 1) {
        cout << x << " ";
    }
    for (int i = 1; i <= n; i++) {
        if (map[x][i] == 1 && ch[i] == 0) {
             dfs(i);
        }
    }
}

void bfs(int v) {

    Q.push(v);
    ch[v] = 1;

    while (!Q.empty()) {
        x = Q.front();
        Q.pop();
        cout << x << " ";

        for (int i = 1; i <= n; i++) {
            if (ch[i] == 0 && map[x][i] == 1) {
                ch[i] = 1;
                Q.push(i);
            }
        }
    }
}



int main(int argc, const char* argv[]) {

    ios_base::sync_with_stdio(false);

 // FILE* p_file = NULL;
 // freopen_s(&p_file,"input.txt", "rt", stdin);
    
    int v, a, b;

    cin >> n >> m >> v;

    for (int i = 1; i <= m; i++) {
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }

    ch[v] = 1;
    dfs(v);
    cout << '\n';

    for (int i = 0; i <= n; i++) ch[i] = 0;
    
    bfs(v);
    cout << "\n";

    return 0;
}