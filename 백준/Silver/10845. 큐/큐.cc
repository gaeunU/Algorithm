#include<iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);

	
	queue<int> Q;

	int n,a,b;
	string str;

	// 명령의 수
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;

		if (str == "push") {
			cin >> a;
			Q.push(a);
		}
		else if (str == "front") {
			if (Q.empty()) cout << "-1" << '\n';
			else cout << Q.front() << '\n';
		}
		else if (str == "back") {
			if (Q.empty()) cout << "-1" << '\n';
			else cout << Q.back() << '\n';
		}
		else if (str == "pop") {
			if (Q.empty()) cout << "-1" << '\n';
			else {
				b = Q.front();
				Q.pop();
				cout << b<<'\n';
			}
		}
		else if (str == "size") {
			cout << Q.size() << '\n';
		}
		else if (str == "empty") {
			if(Q.empty())cout << "1" << '\n';
			else cout << "0" << '\n';
		}

	}

	return 0;
}