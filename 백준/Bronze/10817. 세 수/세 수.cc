#include<iostream>
#include<algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);

	
	vector<int> map;
	int a;

	for (int i = 0; i < 3; i++) {
		cin >> a;
		map.push_back(a);
	}

	sort(map.begin(), map.end());

	cout << map[1];
	

	return 0;
}