#include<iostream>
#include <deque>

using namespace std;


int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);

	int N;
	string str;

	deque<int> DQ;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> str;

		if (str == "push_front") {
			int x;
			cin >> x;
			DQ.push_front(x);
		}
		else if (str == "push_back") {
			int x;
			cin >> x;
			DQ.push_back(x);
		}
		else if (str == "pop_front") {
			if (!DQ.empty()) {
				cout << DQ.front() << "\n";
				DQ.pop_front();
			}
			else
				cout << "-1\n";
			
		}
		else if (str == "pop_back") {
			if (!DQ.empty()) {
				cout << DQ.back() << "\n";
				DQ.pop_back();
			}
			else
				cout << "-1\n";
		}
		else if (str == "size") {
			cout << DQ.size() << '\n';
		}
		else if (str == "empty") {
			if (DQ.empty()) cout << "1\n";
			else cout << "0\n";
		}
		else if (str == "front") {
			if (DQ.empty()) cout << "-1\n";
			else cout << DQ.front() << '\n';
		}
		else if (str == "back") {
			if (DQ.empty())cout << "-1\n";
			else cout << DQ.back() << '\n';
		}
	}

	return 0;
}