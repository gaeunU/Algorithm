#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
string solution(string s) {
    string answer = "";
    
    vector<int> v;
    string tmp;
    
    for(int i=0;i<s.length();i++){
        if(s[i]!= ' '){
            tmp += s[i];
        }else{
            // 만약 공백이면 그전의 숫자들을 한번에 v에 넣어주고
            v.push_back(stoi(tmp));
            
            // tmp의 값 리셋
            tmp.clear();
        }
    }
    // 마지막 숫자까지 다 넣어주기
    v.push_back(stoi(tmp));
    
    // 값 오름차순 정렬
    sort(v.begin(),v.end());
    
    // 맨앞값과 맨뒤값 넣어주기
    answer += to_string(v.front())+" "+ to_string(v.back());
    return answer;

}