#include<iostream>

#define MAX 1000000

using namespace std;

int N;
int A[MAX];
int dp[MAX];


int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	dp[0] = A[0];
	int sum =A[0];

	// dp[i] 는 제일 큰 합을 기억한다.
	// 그 전의 값에서 지금 값을 더한 것과 , 지금값 중 더 큰 값을 저장한다.
	for (int i = 1; i < N; i++) {
		dp[i] = max(dp[i - 1] + A[i], A[i]);
		sum = max(sum, dp[i]);
	}
	 
	cout << sum;
	
	return 0;
}