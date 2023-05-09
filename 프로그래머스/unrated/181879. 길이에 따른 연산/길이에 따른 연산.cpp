#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 1;
    
    if(num_list.size()<=10){
        for(int i=0; i<num_list.size(); i++){
            answer *= num_list[i];
        }
    }else{
        for(int i=0; i<num_list.size(); i++){
            answer += num_list[i];
        }
        answer -=1;
    }
    return answer;
}