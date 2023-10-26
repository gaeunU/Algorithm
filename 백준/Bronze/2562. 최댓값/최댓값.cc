#include<iostream>


using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int a, maxi = -2147000000,idx=10;

	for (int i = 0; i < 9; i++) {
		cin >> a;

		if (a > maxi) {
			maxi = a;
			idx = i + 1;
		}
		
	}

	cout << maxi << '\n' << idx;

	return 0;
}