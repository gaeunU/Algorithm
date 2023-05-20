#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    string str;
    for(int i=0; i<intStrs.size(); i++){
        
        for(int j=s; j<s+l; j++){
            str+= intStrs[i][j];
        };
       
        int x = stoi(str);
        if(x>k)
            answer.emplace_back(x);
            
        str.clear();
    }
    return answer;
}