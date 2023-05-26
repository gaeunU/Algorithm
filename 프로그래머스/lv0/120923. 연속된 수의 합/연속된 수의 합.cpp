#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int count =-100;
    
    while(true){
        int sum = 0;
        answer.clear();
        
        for(int i=count; i<count+num; i++){
            sum += i;
            answer.emplace_back(i);
        }
        
        if(sum == total)
            return answer;
        count += 1;
    }
    
    return answer;
}