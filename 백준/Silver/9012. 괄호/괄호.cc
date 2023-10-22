
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(int argc, const char * argv[]) {
    
    ios_base::sync_with_stdio(false);
    

    int test;
    // test case
    cin>>test;
    
    for(int t=0; t<test; t++){
        
        bool flag=true;
        string str;
        stack<int> s;
        
        cin>>str;
        
        for(int i=0;i<str.size();i++){
            if(str[i] =='(')
                s.push(0);
            else if(str[i] == ')') {
                if(s.empty()){
                    flag = false;
                    break;
                }else s.pop();
            }
        }
        
        if(s.empty() && flag) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
        
    }
    
    return 0;
}