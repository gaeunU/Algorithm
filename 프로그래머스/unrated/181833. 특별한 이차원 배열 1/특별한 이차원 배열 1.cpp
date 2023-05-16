#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    vector <int> arr;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j)
                arr.emplace_back(1);
            else
                arr.emplace_back(0);
        }
        answer.emplace_back(arr);
        arr.clear();
    }
    return answer;
}