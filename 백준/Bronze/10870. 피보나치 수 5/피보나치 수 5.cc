#include <iostream>

using namespace std;

long long factorial(int a){
    
    if(a==0)
        return 0;
    if(a==1)
        return 1;
    
   
    
    // 아직 계산하지 않을 것이라면 점화식에 따라 피보나치 결과 반환
    return factorial(a-1)+factorial(a-2);
  
    
}


int main()
{
    int a;
    cin>>a;
    
    cout<<factorial(a);
    
    return 0;
}