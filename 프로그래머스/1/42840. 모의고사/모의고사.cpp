#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int i,maxi=-2147000000;
    
    int a1[5] = {1,2,3,4,5};
    int a2[8] = {2,1,2,3,2,4,2,5};
    int a3[10] = {3,3,1,1,2,2,4,4,5,5};
    
    int ch[4] = {0,0,0,0};
    
    for(int i=0;i<answers.size();i++){
        if(a1[i%5]==answers[i]) ch[1]+=1;
        
        if(a2[i%8]==answers[i]) ch[2]+=1;
        
        if(a3[i%10]==answers[i]) ch[3]+=1;
    }
    
    for(int i=1;i<4;i++){
        if(maxi<ch[i]) maxi = ch[i];
    }
    
    if(maxi==ch[1]) answer.push_back(1);
    if(maxi==ch[2]) answer.push_back(2);
    if(maxi==ch[3]) answer.push_back(3);
     
    return answer;
}