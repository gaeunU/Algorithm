#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string temp;
    
    for(int i=0; i<myStr.size(); i++){
        if(myStr[i] != 'a' && myStr[i] != 'b' && myStr[i] != 'c'){
            temp += myStr[i];
        }else{
            if(temp.size()>0)
                answer.emplace_back(temp);
            temp.clear();
        }
    }
    if(temp.size()>0)
        answer.emplace_back(temp);
    
    if(answer.size()==0)
        answer.emplace_back("EMPTY");
    return answer;
}