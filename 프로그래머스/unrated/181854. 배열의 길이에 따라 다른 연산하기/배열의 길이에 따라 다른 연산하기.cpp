#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;

    if(arr.size() %2 ==0){
        // 짝수라면
        for(int i=1; i<arr.size();i++){
            arr[i] = arr[i]+n;
            ++i;
        }
    }else{
        // 홀수라면
        for(int i=0; i<arr.size();i++){
            arr[i] = arr[i]+n;
            ++i;
        }
    }
    
    answer = arr;
    return answer;
}