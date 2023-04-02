#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
    int answer = 0;
    int count=0;
    long long NUM=num;
    
    if(NUM ==1) answer =0;
    
    while(NUM != 1){
        
        if(NUM%2==0)
            NUM /=2;
        else
            NUM = NUM*3+1;
        count++;
        
        if(count>=500){
            answer = -1;
        }else
            answer = count;
    }
    
    
    return answer;
}