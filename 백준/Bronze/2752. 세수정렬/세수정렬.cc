#include<iostream>
#include<algorithm>
#include <vector>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);

	vector<int> map(3);

	cin >> map[0] >> map[1] >> map[2];

	sort(map.begin(), map.end());

	for (int i = 0; i < 3; i++) {
		cout << map[i] << " ";
	}

	return 0;
}