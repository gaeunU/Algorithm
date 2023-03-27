#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int k = s.size();
    cout<<k;
    if(k%2==0){
        answer += s[(k/2)-1];
        answer += s[k/2];
    }else{
        answer += s[k/2];
    }
    return answer;
}