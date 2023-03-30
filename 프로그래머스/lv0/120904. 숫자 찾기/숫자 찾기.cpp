#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    string snum = to_string(num);
    string knum = to_string(k);
    for(int i=0; i <snum.size();i++){
        cout <<snum[i]<<endl;
       
        if(snum[i] == knum[0]){
            
            answer = i+1;
            break;
        }
    }
    if(answer == 0){
        answer = -1;
    }
    return answer;
}