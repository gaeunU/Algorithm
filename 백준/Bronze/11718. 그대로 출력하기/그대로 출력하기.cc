#include <iostream>

using namespace std;

int main()
{
    string k;
    
    while(true){
        getline(cin,k);
        if(k=="")
            break;
        cout<<k<<endl;
    }
    cout<<k<<endl;

    return 0;
}