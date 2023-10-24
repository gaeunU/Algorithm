#include<iostream>
#include<algorithm>
#include <string>
#include <vector>

using namespace std;

struct Data {
	int idx;
	int age;
	string name;
	
	Data(int x, int z,string y) {
		idx = x;
		age = z;
		name = y;
	}

	bool operator < (const Data& b) const {
		if (age == b.age) return idx < b.idx;
		return age < b.age;
	}
};


int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);


	int n, a;
	string str;

	cin >> n;

	vector<Data> map;

	for (int i = 0; i < n; i++) {
		cin >> a >> str;
		map.push_back(Data(i, a, str));
	}
	sort(map.begin(), map.end());

	for (int i = 0; i < n; i++) {
		cout << map[i].age << " " << map[i].name<<'\n';
	}

	return 0;
}