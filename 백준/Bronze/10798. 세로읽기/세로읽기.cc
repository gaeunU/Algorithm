#include<iostream>
#include <string>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);


	// 입력할 문자는 5개다.
	string word[5];

	// 입력한 문자열을 배열에 저장한다.
	for (int i = 0; i < 5; i++) 
		cin >> word[i];

	for (int i = 0; i < 15; i++) //최대 15 글자
		for (int j = 0; j < 5; j++) // 5줄 차곡차곡
			if (i < word[j].size()) //word[j]의 인덱스 범위 내에서만 출력
				cout << word[j][i];

	

	return 0;
}