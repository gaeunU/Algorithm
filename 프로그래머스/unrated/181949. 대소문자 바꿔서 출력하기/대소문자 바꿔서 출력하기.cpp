#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for(int i=0; i<str.size();i++){
        if(str[i]>96){
            // 소문자 -> 대문자
            str[i] -= 32;
        }else{
            // 대문자 -> 소문자
            str[i] += 32;
        }
    }
    cout<<str;
    return 0;
}