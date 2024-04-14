#include<iostream>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);

	int m;
	int arr[21] = { 0 };

	string str;
	cin >> m;

	for (int i = 0; i < m; i++) 
	{
		cin >> str;

		if (str == "add") {
			int x;
			cin >> x;

			if (arr[x] == 0) arr[x] = 1;
		}else if (str == "remove") {
			int x;
			cin >> x;
			if (arr[x] == 1) arr[x] = 0;
		}else if (str == "check") {
			int x;
			cin >> x;
			if (arr[x] == 0) cout << "0\n";
			else  cout << "1\n";
		}
		else if (str == "toggle") {
			int x;
			cin >> x;
			if (arr[x] == 0) arr[x] = 1;
			else  arr[x] = 0;
		}
		else if (str == "all") {
			for (int i = 0; i < 21; i++) arr[i] = 1;
		}
		else if (str == "empty") {
			for(int i=0; i<21;i++) arr[i] = 0;
		}
	}
	

	return 0;
}