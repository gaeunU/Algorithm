#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b){
    
    int c;
    while(b!=0){
        c=a%b;
        a=b;
        b=c;
    }
    
    return a;
}
int main()
{
    int a,b;
    
    cin>>a>>b;
    int g = gcd(a,b);
    cout<<g<<"\n";
    cout<<(a*b)/g<<"\n";
    return 0;
}