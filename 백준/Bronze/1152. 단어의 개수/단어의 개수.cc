#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    
    ios_base::sync_with_stdio(false);
    string st;
    int cnt=1;
    
    // 공백 포함 문자열 입력
    getline(cin,st);
    
    // 문자열이 공백인 경우
    if(st.empty()){
        cout<<"0";
        return 0;
    }
    
    
    for(int i=0; i<st.size(); i++){
        if(st[i] == ' ') cnt+=1;
    }
    
    // 문자열 앞 뒤가 공백이면 1 줄인다.
    if(st[0]==' ') cnt-=1;
    if(st[st.size()-1]==' ') cnt-=1;
    
    cout<<cnt<<'\n';
    return 0;
}