#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    
    for(int i=0; i<s.size();i++){
        int count =0;
        cout<<"i: "<<s[i]<<endl;
        
        for(int j=0; j<s.size();j++){
            cout<<"j: "<<s[j]<<endl;
            
            // 자기 자신은 아니면서, 문자열이 같은 경우 count 증가
            if(i!=j && s[i] == s[j]){
                ++ count;
                cout<<count<<endl;
            }
        }
        
        if(count == 0){
            answer.push_back(s[i]);
            cout<<"answer: "<<answer<<endl;
        }
    }
    
    sort(answer.begin(),answer.end());
    return answer;
}