#include<iostream>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);

	int a,befo;

	cin >> befo;

	for (int i = 2; i <= 8; i++) {
		cin >> a;
		if (a - 1 == befo) {
			befo = a;
		}
		else if (a + 1 == befo) {
			befo = a;
		}
		else {
			cout << "mixed";
			return 0;
		}
	}

	if (a == 1)cout << "descending";
	else cout << "ascending";
    
	return 0;
}