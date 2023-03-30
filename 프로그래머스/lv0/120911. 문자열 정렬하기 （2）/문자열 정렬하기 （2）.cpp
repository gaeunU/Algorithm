#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    // 알파벳 아스키코드로 다 소문자로 바꾸기
    for(int i=0; i<my_string.size(); i++){
        if(my_string[i]<97){
            my_string[i] += 32;
        }
        
    }
        
    sort(my_string.begin(),my_string.end());
    //정렬하기
    return my_string;
}