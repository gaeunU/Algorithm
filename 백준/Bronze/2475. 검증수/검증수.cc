#include<iostream>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);

	
	int n,sum=0;
	
	for (int i = 0; i < 5; i++) {
		cin >> n;
		sum += n * n;
	}

	cout << sum%10;
	
	return 0;
}