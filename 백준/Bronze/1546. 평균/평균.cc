#include<iostream>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);

	
	float n,a, maxi = -2147000000;
	int idx = 0;
	float score[1001], sum=0.0;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a;
		score[i] = a;

		if (a > maxi) {
			maxi = a;
			idx = i;
		}
	}
	
	

	for (int i = 0; i < n; i++) {
		
		score[i] = (score[i] / maxi) * 100;
		
		sum += float(score[i]);
	}
	
	cout.precision(6);
	cout << sum / float(n);

	return 0;
}