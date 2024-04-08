#include<iostream>
#include <vector>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);

	//FILE* p_file = NULL;
	//freopen_s(&p_file, "input.txt", "rt", stdin);	
	long long S;
	int N = 0;

	cin >> S;

	while (S > 0) {
		N++;
		S = S - N;
	}
	
	if (S < 0) {
		N--;
	}
	
	cout << N;
	return 0;
}