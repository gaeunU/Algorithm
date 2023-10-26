#include<iostream>
#include <string>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);


	string a, b;

	cin >> a >> b;

	if (a.size() < b.size()) {
		cout << "no";
		return 0;
	}

	cout << "go";

	return 0;
}