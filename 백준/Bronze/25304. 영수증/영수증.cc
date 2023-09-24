#include <iostream>

using namespace std;

int x,n,a,b,sum=0;

int main()
{
    cin>>x>>n;
    
    for(int i=0; i<n; i++){
        cin>>a>>b;
        sum += a*b;
    }
    
    if(sum==x)cout<<"Yes";
    else cout<<"No";
    
    return 0;
}