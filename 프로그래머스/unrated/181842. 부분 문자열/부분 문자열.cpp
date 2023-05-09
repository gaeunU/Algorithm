#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    for(int i=0; i<str2.size()-2; i++){
        string temp;
        for(int j=0; j<str1.size();j++){
            temp += str2[i+j];
        }
        
        cout<<temp<<endl;
        if(temp == str1)
            answer = 1;
    }
    return answer;
}