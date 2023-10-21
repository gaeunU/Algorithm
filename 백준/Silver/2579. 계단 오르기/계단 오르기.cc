#include <iostream>
#include <vector>

using namespace std;


int main(int argc, const char* argv[]) {

    ios_base::sync_with_stdio(false);

    int n;
    int stair[301];
    int dp[301];

    cin >> n;

    // 계단별 점수 저장이요
    for (int i = 1; i <= n; i++) {
        cin >> stair[i];
    }

    dp[1] = stair[1];
    dp[2] = stair[1] + stair[2];
    dp[3] = max(stair[2] + stair[3], stair[1] + stair[3]);

    for (int i = 4; i <= n; i++) {
        // 두칸 올라오기
        // 3칸 전에서 두칸올라오기 한칸올라오기
        dp[i] = max(dp[i - 2] + stair[i],dp[i-3]+stair[i-1]+stair[i]);
    }

    cout << dp[n];
    return 0;
}