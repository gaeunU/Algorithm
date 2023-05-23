#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    string temp ="";
    
    for(int i=0; i<my_str.size();i++){
        
        if(temp.size() ==n){
            answer.emplace_back(temp);
            temp.clear();
        }
            
        temp += my_str[i];
    }
    answer.emplace_back(temp);
    
    return answer;
}