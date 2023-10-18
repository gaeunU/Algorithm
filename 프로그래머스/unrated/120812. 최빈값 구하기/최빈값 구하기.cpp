#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> array) {
    int answer = 0,i,maxi=0,cnt=0;
    vector<int> ch(1001,0);
    
    for(i=0;i<array.size();i++){
        ch[array[i]] +=1;
    }
    
    
    for(i=0;i<1001;i++){
        
        if(ch[i]==0) continue;
        
        if(ch[i]>maxi){
            maxi = ch[i];
            answer = i;
        }
    }
    
    
    for(i=0; i<1001;i++){
        if(ch[i]==maxi) cnt+=1;
        if(cnt>1) answer = -1;
    }
    
    return answer;
}