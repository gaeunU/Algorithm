#include <iostream>

using namespace std;

int main()
{
    string s;
    
    cin>>s;
    
    for(int i=0; i<s.size();i++){
        
        if(i == 10 || i==20 || i==30 || i==40|| i==50||
        i ==60 || i==70 || i==80 || i==90)
            cout<<""<<endl;
            
        cout<<s[i];
        
    }
    
    // 0123456789
    // 10 11 12 13 14 15 16 17 18 19
    // 20 21 22 --
    
    return 0;
}