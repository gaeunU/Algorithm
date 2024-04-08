#include<iostream>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	string str;
	int count = 0;

	cin >> str;
	
	int start = str[0];

	// 그리디 알고리즘
	// 앞의 것과 뒤의 것이 다르면 더한다.
	
	for (int i = 0; i < str.size(); i++) {
		if (str[i] != str[i + 1]) {
			count++;
		}
	}

	if (count == 0) cout << count;
	else cout << count/2;
	
	return 0;
}