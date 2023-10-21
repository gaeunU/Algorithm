#include <iostream>
#include <vector>

using namespace std;

int arr[1001][4];

int main(int argc, const char* argv[]) {

    ios_base::sync_with_stdio(false);

    
    int n, cost[3];

    // arr 집별로 가격을 담아유
    // dp 집의 비용의 최솟값을 담아요
    // ch 직전 집의 색을 체크해요
    
    // 0번째 집이란 것은 없다.
    arr[0][0] = 0;
    arr[0][1] = 0;
    arr[0][2] = 0;

    
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> cost[0] >> cost[1] >> cost[2];

        // 내가 0번 색을 칠하고 그 전집에서 1번 혹은 2번을 칠한 것 중 작은 것
        arr[i][0] = min(arr[i - 1][1], arr[i - 1][2]) + cost[0];

        // 내가 1번 색을 칠하고 그 전집에서 0,2번을 칠한 경우 중 작은 경우
        arr[i][1] = min(arr[i - 1][0], arr[i - 1][2]) + cost[1];

        // 내가 2번 색을 칠하고 그 전 집에서 1,3 칠한 것 중 작은 경우
        arr[i][2] = min(arr[i - 1][0], arr[i - 1][1]) + cost[2];

    }

    // 
    cout << min(arr[n][2], min(arr[n][0], arr[n][1]));

    return 0;
}