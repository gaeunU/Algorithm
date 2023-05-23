#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int count =1; 
    int size = numbers.size(); // 3
    
    for(int i=0; count<=k; i+=2){
        
        if(count ==k)
            answer = numbers[i%size];
        count ++;
        
    }
    
    
    return answer;
}