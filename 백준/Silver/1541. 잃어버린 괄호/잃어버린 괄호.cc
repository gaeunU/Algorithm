#include<iostream>
#include <string>


using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(0); cin.tie(0);


	char str;
	string temp = "";
	string input;
	int result = 0;

	cin >> input;

	bool minus = false;
	for (int i = 0; i <= input.size(); i++) {

		str = input[i];

		if (str == '-' || str == '+' || str == '\0') {
			if (minus) {
				result -= stoi(temp);
			}
			else {
				result += stoi(temp);
			}

			temp = "";

			if (str == '-') {
				minus = true;
			}

			
		}
		else temp += str;
		
	}

	cout << result;

	return 0;
}