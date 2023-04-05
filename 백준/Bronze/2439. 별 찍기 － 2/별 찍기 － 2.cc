#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i=1; i<=n;i++){
        for(int j=0; j<n; j++){
            // n-i번째 칸에서부터 별을 찍어
            // 5-1 5-2 5-3 
            if(j>=n-i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<'\n';
    }

    return 0;
}