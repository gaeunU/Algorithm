#include<iostream>
#include <string>


using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);

	int test,n;
	string str;

	cin >> test;

	for (int t = 0; t < test; t++) {
		cin >> n;
		cin >> str;

		for (int i = 0; i < str.size(); i++) {
			for (int j = 0; j < n; j++) {
				cout << str[i];
			}
		}

		cout << '\n';
	}
	

	return 0;
}