#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    int i,a=0,b=0;
    int temp = n;
    
    while(temp>0){
        if(temp%2==1) a += temp%2;
        temp /=2;
    }
    
    for(i=n+1;;i++){
        temp = i;
        b=0;
            
       while(temp>0){
        if(temp%2==1) b += temp%2;
        temp /=2;
       } 
        
        if(a==b){
            answer = i;
            break;
        }
    }
    
    return answer;
}