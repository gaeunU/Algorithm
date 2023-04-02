#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int n =x;
    int sum=0;
    while(x !=0){
        // 각 자리 수를 더해
        sum += x%10;
        x /= 10;
        
    }
    
    cout<<sum<<endl;
    cout<<n<<endl;
    //원래 수 n과 각 자리 수를 더한 값을 나눠
    if(n%sum!=0)
        answer = false;
    else if(sum%n ==0)
        answer = true;
   
    //나누어 떨어지면 true
    
    //아니면 false
    return answer;
}