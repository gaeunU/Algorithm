#include <string>
#include <vector>
#include <typeinfo>
#include <iostream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    for(int i=0; i<my_string.size(); i++){
        if(my_string[i]<58 && my_string[i]>47){
            answer += int(my_string[i])-48;
        }
    }
    
    return answer;
}