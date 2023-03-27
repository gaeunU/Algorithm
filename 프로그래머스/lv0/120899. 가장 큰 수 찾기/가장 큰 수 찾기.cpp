#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int best = 0;
    int idx =0;
    
    for(int i=0; i<array.size();i++){
        
        if(array[i] > best){
            best = array[i];
            idx = i;
        }
    }
     answer.push_back(best);
    answer.push_back(idx);
    
    return answer;
}