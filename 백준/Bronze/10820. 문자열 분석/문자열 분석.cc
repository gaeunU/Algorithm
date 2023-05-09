#include <iostream>
#include <string>

using namespace std;

string s;


int main()
{
    // 공백을 포함한 문자열 입력
   while(getline(cin,s)){
    int a1 = 0; // 소문자 개수
    int a2 = 0; // 대문자 개수
    int a3 = 0; // 숫자
    int a4 = 0; // 공백
    for(int i=0; i<s.size(); i++){
       // 대문자 개수
       if(s[i]>64 && s[i]<91){
           a2 += 1;
       }else if(s[i]>96 && s[i]<123){
           // 소문자 개수
           a1 += 1;
       }else if(s[i]>47 && s[i]<58){
           // 숫자 개수
           a3 +=1;
       }else{
           // 공백 개수
           a4 +=1;
       }
       
    }
    cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<'\n';
   }
   
    return 0;
}