#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
int n,m,cnt=0;
vector<int> map[10001];
int ch[10001];

void dfs(int x) {
    
    for (int i = 0; i < map[x].size(); i++) {
        int next = map[x][i];

        if (ch[next] == 0) {
            ch[next] = 1;
            dfs(next);
            
        }
    }
}


int main(int argc, const char* argv[]) {

    ios_base::sync_with_stdio(false);

  
    int a, b;

    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        map[a].push_back(b);
        map[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) {
        if (ch[i] == 0) {
            cnt += 1;
            dfs(i);
        }
    }

    cout << cnt << '\n';
    return 0;
}