#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    for(int i=0; i<arr.size(); i++){
        answer.push_back(arr[i]);
        for(int j=0; j<delete_list.size();j++){
            if(arr[i] == delete_list[j]){
                answer.pop_back();
                break;
            }
        }
    }

    return answer;
}