#include<iostream>
#include<algorithm>
#include <string>
#include <vector>

using namespace std;

struct Data {
	int idx;
	int score;

	Data(int a, int b) {
		idx = a;
		score = b;
	}

	bool operator<(const Data& b)const {
		return score > b.score;
	}
};

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);

	
	int a,sum=0;
	vector<Data>score;
	vector<int> idx;

	for (int i = 0; i < 8; i++) {
		cin >> a;
		score.push_back(Data(i,a));
	}
	
	sort(score.begin(), score.end());

	for (int i = 0; i < 5; i++) {
		sum += score[i].score;
		idx.push_back(score[i].idx+1);
	}

	cout << sum << '\n';

	sort(idx.begin(), idx.end());

	for (int i = 0; i<5; i++) {
		cout << idx[i]<< " ";
	}

	return 0;
}