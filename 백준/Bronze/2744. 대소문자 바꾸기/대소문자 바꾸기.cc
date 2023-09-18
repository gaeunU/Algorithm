#include <iostream>

using namespace std;

string n;

int main()
{
    cin>>n;
    
    for(int i=0; i<n.size(); i++){
        if(n[i]<91){
            n[i] +=32;
        }else{
            n[i] -=32;   
        }
        cout<<n[i];
    }
}