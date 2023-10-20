#include <iostream>
#include <vector>

using namespace std;

int a,n, b, m;
vector<int> map[101];
int ch[101],cnt=-1;
bool flag = false;

void dfs (int v, int sum) {

    if (v == b) {
        cnt = sum;
        return;
    }

    for (int i = 0; i < map[v].size(); i++) {
        int next = map[v][i];
        if (ch[next] == 0) {
            ch[next] = 1;
            dfs(next,sum+1);
        }
    }

}

int main(int argc, const char* argv[]) {

    ios_base::sync_with_stdio(false);

    int c, d;

    cin >> n >> a >> b >> m;

    for (int i = 0; i < n; i++) {
        cin >> c >> d;
        map[c].push_back(d);
        map[d].push_back(c);
    }

    ch[a] = 1;
    dfs(a,0);

    if (cnt > 0)cout << cnt << '\n';
    else cout << "-1";

    return 0;
}