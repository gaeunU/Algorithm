#include<iostream>
#include<algorithm>
#include <string>
#include <vector>

using namespace std;

struct Data {
	int x;
	int y;

	Data(int a, int b) {
		x = a;
		y = b;
	}

	bool operator < (const Data& b) const {
		if (y == b.y) return x < b.x;
		return y < b.y;

	}
};
int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);


	int n,a,b;
	vector <Data> map;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		map.push_back(Data(a, b));
	}
	sort(map.begin(), map.end());
	for (int i = 0; i < n; i++) {
		cout << map[i].x << " " << map[i].y << '\n';
	}

	return 0;
}