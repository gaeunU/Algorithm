#include <iostream>

using namespace std;

int main()
{
    string s;
    int sum=0;
    int num;
    
    cin>>num;
    cin>>s;
    
    for(int i=0; i<num;i++){
            sum += s[i]-48;
    }
    
    cout<<sum<<endl;
    return 0;
}