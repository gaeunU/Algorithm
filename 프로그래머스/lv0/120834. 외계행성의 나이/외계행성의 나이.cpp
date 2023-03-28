#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int age) {
    string answer = "";
    // a=0, b=1 ...
    
   string s=to_string(age);
    cout<<s<<endl;
    for(int i=0; i<s.size(); i++)
        answer+=(s[i]+49);
    
    return answer;
}