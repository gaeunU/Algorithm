#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    int i;
    stack<int> st;
    
    for(i=0; i<s.size();i++){
        if(s[i]=='(') st.push(1);
        else if(s[i]==')'){
            if(st.empty()) {
                answer = false;
                break;
            }
            st.pop();
        }
    }
    if(!st.empty()) answer=false;
    return answer;
}