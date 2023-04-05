#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    // 첫째 줄에는 별 5개 
    // 다음 줄은 별 N-1개 N-2개 --
    for(int i=n; i>0;i--){
        for(int j=0; j<n; j++){
            if(n-i<=j)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<'\n';
    }

    return 0;
}