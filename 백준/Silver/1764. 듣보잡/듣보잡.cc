#include<iostream>
#include<algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int n, m;
	string s;

	cin >> n >> m;
	vector<string> str(n);
	vector<string> answer;

	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}

	// 이진탐색은 정렬된 상태에서 사용 가능하다.
	sort(str.begin(), str.end());

	for (int i = 0; i < m; i++) {

		cin >> s;

		if (binary_search(str.begin(), str.end(), s)) 
			answer.push_back(s);
	}

	sort(answer.begin(), answer.end());
	cout << answer.size() << '\n';

	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << '\n';
	}
	
	return 0;
}