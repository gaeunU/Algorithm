#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
     string str;
    
    for(int i=0; i<my_string.size();i++){
       
        if(my_string[i] != 32 && my_string[i+1] != 32)
            str += my_string[i];
        else if(my_string[i] != 32 && my_string[i+1] == 32){
            str += my_string[i]; 
            answer.push_back(str);
            str.clear();
            
        }
    }
    if(str.size() != 0)
        answer.push_back(str);
    return answer;
}