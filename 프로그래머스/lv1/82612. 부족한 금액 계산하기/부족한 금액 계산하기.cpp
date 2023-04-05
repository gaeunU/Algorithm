#include <algorithm>

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long temp=0;
    
    for(int i=1; i<=count;i++){
        temp += price*i;
    }
    if(temp>money)
        answer = abs(temp - money);
    else if(temp <= money)
        answer = 0;
    
    return answer;
}