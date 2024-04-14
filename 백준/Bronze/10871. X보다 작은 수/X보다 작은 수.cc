#include<iostream>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n, x,a;

	cin >> n >> x;

	for(int i = 0; i <n; i++) {
		cin >> a;
		if (a < x)cout << a<<' ';
	}

	return 0;
}