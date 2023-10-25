#include<iostream>
#include <string>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);


	string  str;

	cin >> str;
	int num = str.size();

	for (int i = 0; i < num; i++) {
		cout << str[i];
		
		if(i%10 == 9)cout << '\n';
	}

	

	return 0;
}