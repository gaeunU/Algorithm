#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    for(int i=0; i<arr.size(); i++){
        if(find(answer.begin(), answer.end(),arr[i]) == answer.end() && answer.size()<k)
            answer.emplace_back(arr[i]);
    }
    
    if(answer.size()<k){
        for(int i=answer.size()-1; i<k-1; i++){
            answer.emplace_back(-1);
        }
    }
    
    
    return answer;
}