#include<iostream>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);

	int a, b, c, temp;

	while (true) {
		cin >> a >> b >> c;
		
		temp = 0;

		if (a==0 && b==0 && c==0) {
			return 0;
		}

		if (a > b) {
			temp = b;
			b = a;
			a = temp;
		}
		if (b > c) {
			temp = c;
			c = b;
			b = temp;
		}

		if (a * a + b * b == c * c) {
			cout << "right\n";
		}
		else {
			cout << "wrong\n";
		}

	}

	

	return 0;
}