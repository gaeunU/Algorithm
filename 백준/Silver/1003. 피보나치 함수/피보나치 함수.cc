#include <iostream>
#include <vector>

using namespace std;


int main(int argc, const char* argv[]) {

    ios_base::sync_with_stdio(false);
    int arr[50][50];

 // FILE* p_file = NULL;
 // freopen_s(&p_file,"input.txt", "rt", stdin);
    int test;
    cin >> test;

    for (int t = 0; t < test; t++) {
        int n;
        cin >> n;
        pair <int, int> dp[50];

        dp[0] = make_pair(1, 0);
        dp[1] = make_pair(0, 1);

        for (int i = 2; i <= n; i++) {
            dp[i] = make_pair(dp[i - 1].first + dp[i - 2].first,
                dp[i - 1].second + dp[i - 2].second);
        }
        
        cout << dp[n].first << " " << dp[n].second << '\n';
    }
    
    return 0;
}