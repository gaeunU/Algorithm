#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    int n;
    int cnt =1;
    stack <int> s;
    string result;
    
    cin>>n;
    
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        
        while(cnt<=x){
            s.push(cnt);
            cnt++;
            result += "+";
        }
        
        if(s.top() == x){
            s.pop();
            result += "-";
        }else{
            cout<<"NO";
            return 0;
        }
    }
    for(int i=0; i<result.size();i++)
        cout<<result[i]<<'\n';
    return 0;
}