#include <iostream>

using namespace std;

int gdc(int a, int b){
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
    int n,a,b;
    int great;
    int answer;
    cin>>n;
    
    for(int i=0; i<n;i++){
         cin>>a>>b;
         great = gdc(a,b);
         answer = (a*b)/great;
         cout<<answer<<"\n";

    }
        
    
    return 0;
}