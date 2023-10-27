#include<iostream>
#include<algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n, m,a,b;
	
	bool flag;
	
	cin >> n;
	vector<int> ch(n);

	for (int i = 0; i < n; i++) {
		// 상근이가 가지고 있는 카드 
		cin >> m;
		ch[i] = m;
	}

	sort(ch.begin(), ch.end());
	
	cin >> a;
	for (int i = 0; i < a; i++) {
		
		cin >> b;

		if(binary_search(ch.begin(), ch.end(), b))
			cout << "1 ";
		else cout << "0 ";
	}

	return 0;
}