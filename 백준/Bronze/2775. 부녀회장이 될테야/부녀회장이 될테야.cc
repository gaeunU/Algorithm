#include <iostream>
#include <vector>

using namespace std;


int main(int argc, const char* argv[]) {

    ios_base::sync_with_stdio(false);

 // FILE* p_file = NULL;
 // freopen_s(&p_file,"input.txt", "rt", stdin);

    int test;
    cin >> test;

    for (int t = 0; t < test; t++) {
        int k, n,temp=0;
        cin >> k >> n;
        int dp[20][20] = { 0, };

        for (int i = 1; i <= n; i++) {
            dp[0][i] = i;
        }

        // 층수
        for (int i = 1; i <= k; i++) {
            for (int j = 1; j <= n; j++) { // 호수
                for (int x = 1; x <= j; x++) {
                    // 각 호수에 값을 더해간다.
                    dp[i][j] += dp[i - 1][x];
                }
            }
        }
        
        cout<<dp[k][n]<<'\n';

    }
    
    return 0;
}