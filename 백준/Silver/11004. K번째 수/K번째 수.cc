#include<iostream>
#include<algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int n, k, a;

	cin >> n >> k;

	vector<int> arr;

	for (int i = 0; i < n; i++) {
		cin >> a;
		arr.push_back(a);
	}

	sort(arr.begin(), arr.end());
	
	cout << arr[k-1];

	return 0;
}