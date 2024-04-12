#include<iostream>
using namespace std;


int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);


	int n, k;
	float val = 1;
	cin >> n >> k;

	for (int i = 0; i < k; i++) {
		val *= (n - i);
		val /= (k - i);
	}
	
	cout << val;
	return 0;
}