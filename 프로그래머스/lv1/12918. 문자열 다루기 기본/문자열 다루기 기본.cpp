#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    if(s.size()==4 || s.size()==6){
        for(int i=0; i<s.size();i++){
            if(s[i]>64)
                return answer = false;
        }
    }else
        return answer = false;
    return answer;
}