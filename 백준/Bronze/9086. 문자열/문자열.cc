#include <iostream>

using namespace std;

int n;
string arr[10];

int main()
{
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<n; i++){
        
        cout<<arr[i][0]<<arr[i][arr[i].size()-1]<<endl;
    }
    
    return 0;
}