#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for(int i=0; i<myString.size(); i++){
        if(myString[i] == 'A')
            myString[i] = 'B';
        else
            myString[i] = 'A';
        
    }
    
    if(myString.find(pat) != string::npos)
        answer =1;
    
    return answer;
}