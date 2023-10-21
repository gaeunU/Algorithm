#include <iostream>
#include <vector>

using namespace std;


int main(int argc, const char* argv[]) {

    ios_base::sync_with_stdio(false);

 // FILE* p_file = NULL;
 // freopen_s(&p_file,"input.txt", "rt", stdin);
    int n;

    cin >> n;
    vector<int> dp(5001,2147000000);

    dp[3] = 1;
    dp[5] = 1;
    
    
    for (int i = 6; i <= n; i++) {
         dp[i] = min(dp[i - 3] + 1, dp[i - 5] + 1);
    }
    
    

    if (dp[n] < 2147000000)cout << dp[n];
    else cout << -1;

    return 0;
}