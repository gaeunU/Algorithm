#include <iostream>
#include <vector>

using namespace std;


int main(int argc, const char* argv[]) {

    ios_base::sync_with_stdio(false);
    int arr[12];
 // FILE* p_file = NULL;
 // freopen_s(&p_file,"input.txt", "rt", stdin);
    int test;
    cin >> test;

    for (int t = 0; t < test; t++) {
        int n;

        cin >> n;

        vector<int> dp(12, 2147000000);
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
        
        for (int i = 4; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        }

        arr[t] = dp[n];
    }
    
    for (int i = 0; i < test; i++) {
        cout << arr[i] << '\n';
    }

    return 0;
}