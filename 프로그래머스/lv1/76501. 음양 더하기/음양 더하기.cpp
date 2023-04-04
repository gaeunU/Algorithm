#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    for(int i=0; i<absolutes.size(); i++){
        if(!signs[i]){
            absolutes[i] = -absolutes[i];
        }else {
            cout<<absolutes[i]<<"\n";
        }
        answer += absolutes[i];
    }
    return answer;
}