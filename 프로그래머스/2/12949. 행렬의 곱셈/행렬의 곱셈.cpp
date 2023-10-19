#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) 
{
	vector<vector<int>> answer;
    int sum,i,j,k;
	
	for ( i = 0; i < arr1.size(); i++) //arr1
	{
		vector<int> tmp;
		for ( j = 0; j < arr2[0].size(); j++) //arr2
		{
			sum = 0;
			for ( k = 0; k < arr1[0].size(); k++)
				sum += arr1[i][k] * arr2[k][j];	
			tmp.push_back(sum);
		}
		answer.push_back(tmp);
	}
	
	return answer;
}