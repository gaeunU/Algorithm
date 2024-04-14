#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n,sum=0,total=0;
	int arr[1001];

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	
	sort(arr+1, arr + n+1);

	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			sum += arr[i];
		}
	}

	cout << sum;

	return 0;
}