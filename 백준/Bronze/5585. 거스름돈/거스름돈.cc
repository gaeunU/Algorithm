#include<iostream>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n; // 내가 낸 돈
	int total; // 내가 내야 할 거스름돈
	int count=0; // 동전 개수
	int arr[6] = { 500,100,50,10,5,1 };

	cin >> n;

	total = 1000 - n; 

	for (int i = 0; i < 6; i++) {
		if (total < arr[i]) continue; // 잔돈이 더 작은 경우

		while (total>=arr[i]) {
			total -= arr[i];
			count++;
		}
	}

	cout << count;

	return 0;
}