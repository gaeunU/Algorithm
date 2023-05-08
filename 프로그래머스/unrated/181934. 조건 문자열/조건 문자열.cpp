#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    
    if(ineq == ">" && eq == "="){
        if(n >= m)
            answer = 1;
        cout<<"1";
    }else if(ineq == "<" && eq == "="){
        if(n <= m)
            answer = 1;
        cout<<"2";
    }else if(ineq == ">" && eq == "!"){
        if(n > m)
            answer = 1;
      cout<<"3";
    }else if(ineq == "<" && eq == "!"){
        if(n < m)
            answer = 1;
        cout<<"4";
    }
    
    return answer;
}