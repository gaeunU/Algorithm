#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string temp = "";
    
    for(int i=1; i<food.size(); i++){
        int s = food[i];
        
        if(s==1)
            s=0;
        else if(s%2!=0)
            s -=1;
        
        for(int j=0; j<s/2; j++){
            
            temp += to_string(i);
        }
    }
    answer = temp;
    answer += "0";
    sort(temp.begin(), temp.end(), greater<>());
    answer += temp;
    cout<<answer<<endl;
    return answer;
}