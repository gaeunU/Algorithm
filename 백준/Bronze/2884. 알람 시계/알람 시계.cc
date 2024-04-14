#include<iostream>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);

	//FILE* p_file = NULL;
	//freopen_s(&p_file, "input.txt", "rt", stdin);	

	int h, m;

	cin >> h >> m;

	if (m >= 45) {
		cout << h << " " << m - 45;
		return 0;
	}

	if (h == 0)cout << "23 ";
	else cout << h - 1<<" ";
	cout << 15 + m;


	return 0;
}