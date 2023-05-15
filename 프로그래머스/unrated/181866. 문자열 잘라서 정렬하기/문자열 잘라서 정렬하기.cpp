#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string temp;
    for(int i=0; i<myString.size(); i++){
        if(myString[i]!='x'){
            temp += myString[i];
        }else{
            if(temp.size()!=0)
                answer.emplace_back(temp);
            temp.clear();
        }
    }
    
    // 만약 x 뒤에 남은 temp 를 answer에 담지 못했다면
    if(temp.size()>0)
        answer.emplace_back(temp);
    
    // 사전순으로 정렬
    sort(answer.begin(), answer.end());
    return answer;
}