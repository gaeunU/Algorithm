#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> map[100001];
int arr[100001]; // 부모노드 저장
int ch[100001];

void dfs(int v) {
    for (int i = 0; i < map[v].size(); i++) {
        int next = map[v][i];
        if (ch[next] == 0) {
            ch[next] = 1;
            arr[next] = v; 
            dfs(next);
        }
    }
}

int main(int argc, const char* argv[]) {

    ios_base::sync_with_stdio(false);

   
    int a, b;

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        map[a].push_back(b);
        map[b].push_back(a);
    }

    ch[1] = 1;
    dfs(1);
    
    // 2번부터 출력
    for (int i = 2; i <= n; i++) {
        cout << arr[i] << '\n';
    }

    return 0;
}