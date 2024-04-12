#include<iostream>

using namespace std;

int arr[60][60];

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}
	
	for (int i = 0; i < N; i++) {
		int num = 1; // 순위

		for (int j = 0; j < N; j++) {
			if (j == i)continue;

			if (arr[j][0] > arr[i][0]) {
				if (arr[j][1] > arr[i][1]) num++;
			}
		}

		cout << num << " ";
	}

	return 0;
}