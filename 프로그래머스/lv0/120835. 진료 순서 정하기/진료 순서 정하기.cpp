#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> temp;
    temp = emergency;
    
    sort(emergency.begin(),emergency.end(),greater<>());
    
    for(int i=0; i<emergency.size();i++){
        for(int j=0; j<temp.size();j++)
            if(temp[i] == emergency[j]){
                answer.push_back(j+1);
            }
    }
    
    return answer;
}