#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
  
    
    // 1-> - - 2 - - 1개 j=0 / 2 // i+count=1 // n+count =5
    // 2-> - 2 3 4  - 3개 j=0,1,2  // i+count = 3 / n+count = 6
    // 3-> 1 2 3 4 5 5개 j=0,1,2,3,4 // i+count = 5 // n+count = 7 
    // 4-> 7개 j=0,1,2,3,4,5,6
    // 5 -> 9개 j=0,1,2,3,4,5,6,7,8
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i;j++)
            cout<<" ";
        for(int j=1; j<=2*i-1;j++)
            cout<<"*";
       
        cout<<"\n";
    }

    return 0;
}