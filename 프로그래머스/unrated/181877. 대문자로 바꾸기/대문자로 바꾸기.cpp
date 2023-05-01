#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(int i=0; i<myString.size(); i++){
        if(myString[i] >=97) // 소문자일 경우 대문자로 바꾸기
            answer += myString[i]-32;
        else{
            // 대문자일 경우 그대로 저장
            answer += myString[i];
        }
    }
    return answer;
}