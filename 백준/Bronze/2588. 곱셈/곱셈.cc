#include <iostream>

using namespace std;

int a,b;
int answer =1;

int main()
{
    cin>>a>>b;
    answer = a*b;
    
    while(b>0){
        cout<<a*(b%10)<<endl;
        b /= 10;
    }
    
    cout<<answer;
    
    
    return 0;
}