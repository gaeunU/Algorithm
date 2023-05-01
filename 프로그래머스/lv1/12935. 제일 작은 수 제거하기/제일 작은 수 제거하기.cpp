#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min_index = min_element(arr.begin(),arr.end())-arr.begin();
    cout<<min_index;
    
    if(arr.size()>1){
        arr.erase(arr.begin()+min_index);
        answer = arr;
    }else
        answer.push_back(-1);
    return answer;
}