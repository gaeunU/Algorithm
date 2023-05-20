#include <iostream>

using namespace std;

long long factorial(int a){
    
    if(a<2)
        return 1;
    
    return a*factorial(a-1);
    
}


int main()
{
    int a;
    cin>>a;
    
    cout<<factorial(a);
    
    return 0;
}