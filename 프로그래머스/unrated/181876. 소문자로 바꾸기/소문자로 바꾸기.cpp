#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(int i; i<myString.size();i++){
        
        if(myString[i]<97){
            //대문자인 경우
            answer += myString[i]+32;
        }else if(myString[i]>=97)// 소문자인 경우
            answer += myString[i];
    }
    return answer;
}