#include<iostream>
#include <vector>

using namespace std;

int N, sum =0;
int A[1001];
vector<int> dy(1001, 1);


int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (A[i] > A[j]) {
				dy[i] = max(dy[i], dy[j] + 1);
			}
		}
	}

	for (int i = 0; i < N; i++) {
		sum = max(sum, dy[i]);
	}

	cout << sum;
	
	return 0;
}