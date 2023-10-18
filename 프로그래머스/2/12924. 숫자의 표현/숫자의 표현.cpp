#include <string>

using namespace std;


int solution(int n) {
    int temp,b=1,answer=1;
    
    n--; // 14
    
     while(n>0){
        b++; //1
        n = n-b; //13
        
        if(n%b==0){
           
            answer++;
        }
    }
    
    
    
    
    return answer;
}