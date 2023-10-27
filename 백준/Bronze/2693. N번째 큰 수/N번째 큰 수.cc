#include<iostream>
#include<algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);

	int test;
	cin >> test;

	for (int t = 0; t < test; t++) {
		int arr[10] = { 0, };

		for (int i = 0; i < 10; i++) {
			cin >> arr[i];
		}

		sort(arr, arr+10);

		cout << arr[7] << '\n';
	}

	return 0;
}