#include<iostream>
#include <string>


using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);



	int test;
	string str;

	cin >> test;
	
	for (int t = 0; t < test; t++) {
		int sum = 0,add = 1;

		cin >> str;
		
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == 'X') {
				add = 1;
			}
			else if (str[i] == 'O') {
				sum = sum + add;
				add += 1;
			}
		}
		cout << sum << '\n';
	}

	return 0;
}