#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i=1; i<=n; i++){
        if(n%2!=0 && i&2!=0){
            // n이 홀수인 경우 홀수를 모두 더해
            answer +=i;
        }else if(n%2==0 && i%2==0){
            // n이 짝수인 경우 짝수의 제곱의 합
            answer +=i*i;
        }
    }
    return answer;
}