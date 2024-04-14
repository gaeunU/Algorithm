#include<iostream>
using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);

	int h, w,t,n;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		
		int cnt = 0;
		for (int i = 1; i <= w; i++) {
			for (int j = 1; j <= h; j++) {
				cnt++;
				if (cnt == n) {
					cout << j * 100 + i << '\n';
					break;
				}
			}
		}
	}
	return 0;
}