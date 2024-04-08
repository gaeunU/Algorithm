#include<iostream>
#include<algorithm>
#include <cctype>

using namespace std;
int num[26];

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	string str;

	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		
		// 다 대문자로 변환하고
		str[i] = toupper(str[i]);
		num[str[i] - 65]++;
		
	}

	int maxx = 0; // 가장 많이 등장한 문자
	int idx=0;// maxx값의 인덱스

	// 자주 나온 값을 찾고.
	for (int i = 0; i < 26; i++) {
		
		if (maxx < num[i]) {
			maxx = num[i];
			idx = i;
		}

		//printf("\n%d", idx);
	}

	// 자주 나온 값과 같은게 있으면 
	// ?를 출력하고 바로 종료한다.
	for (int i = 0; i < 26; i++) {
		if (i == idx) {
			continue;
		}

		if (num[i] == maxx) {
			cout << "?";
			return 0;
		}
	}

	cout << (char)(idx + 65);
	

	return 0;
}