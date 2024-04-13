#include<iostream>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n,a,sum=0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;

		if (a == 1) continue;
		
		bool flag = true;
		for (int i = 2; i < a; i++) {
			if (a % i == 0) {
				flag = false;
				break;
			}
		}
		if(flag)sum++;
		
	}
		
	cout << sum;
	

	return 0;
}