#include<iostream>
#include<algorithm>
#include <string>
#include <vector>

using namespace std;
vector<int> ch;
int n;

void binary_search(int x) {
	int left = 0, mid = 0, right = n - 1;

	while (left <= right) {
		mid = (left + right) / 2;

		// 탈출 조건 : a_array에서 x를 찾은 경우
		if (ch[mid] == x) {
			cout << 1 << "\n";
			return;
		}
		else if (ch[mid] > x) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}

	// 이분 탐색이 끝날 때까지 x를 찾지 못했다면 0(false)를 출력한다.
	cout << 0 << "\n";

	return;
}


int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);


	int m,a;
	
	bool flag=false;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		ch.push_back(a);
	}

	sort(ch.begin(), ch.end());

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> a;
		binary_search(a);
	}
	

	return 0;
}