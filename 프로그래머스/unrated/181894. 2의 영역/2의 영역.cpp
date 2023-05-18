#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> temp;
    
    bool flag = false;
    
    for(int i=0; arr.size()>i; i++){
        if(arr[i]==2){
            temp.emplace_back(i);
        }
    }
    
    if(temp.size() >1){
        for(int i=temp[0]; i<=temp[temp.size()-1]; i++){
            answer.emplace_back(arr[i]);
        }
    }else if(temp.size()==1)
        answer.emplace_back(arr[temp[0]]);
    else
         answer.emplace_back(-1);
    
    return answer;
}