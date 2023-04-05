#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    // 첫째 줄에는 별 N개 다음 줄은 별 N-1개 N-2개 --
    for(int i=n; i>0;i--){
        for(int j=i; j>0;j--)
            cout<<"*";
        cout<<'\n';
    }

    return 0;
}