#include<iostream>
#include<algorithm>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);



	int n, cnt;


	cin>>n;
	cnt = n;

	for (int i = 0; i < n; i++) {
		
		string str,past,now;

		int idx = 0;
		int ch[30] = { 0, }; // 알파벳 저장

		cin >> str;

		past = str[0];

		// 방문한 알파벳 체크
		ch[str[0] -96] = 1;

		for (int i = 1; i < str.size(); i++) {
			// a 부터 1
			idx = str[i] - 96;
			now = str[i];
			
			// 만약 전 것과 같다면 넘어가
			if (now == past) {
				past = now;
				continue;
			}
			if (now != past && ch[idx] > 0) {
				cnt -= 1;
				break;
			}
			if (now != past && ch[idx] == 0) {
				ch[idx] = 1;
				past = now;
			}
		}

	}
	cout << cnt;

}