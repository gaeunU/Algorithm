#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    
    for(int i=0; i<arr.size(); i++){
        if(flag[i]){ // true인 경우
            for(int j=0; j<arr[i]*2; j++)
                answer.emplace_back(arr[i]);
        }else{ // false 인 경우
             for(int j=0; j<arr[i]; j++)
                answer.pop_back();
        }
    }
    return answer;
}