#include<iostream>
#include <deque>

using namespace std;


int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);

	int A, B, C;
	int arr[11] = { 0 };

	cin >> A >> B >> C;

	int v = A * B * C;

	while (v>0) {
		int a = v % 10;
		v = v / 10;

		arr[a]++;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}
	return 0;
}