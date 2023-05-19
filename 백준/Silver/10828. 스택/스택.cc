#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, num;
    string op;
    vector<int> vec;
    
    cin>>N;
    
    for(int i=0; i<N; i++){
        cin>>op;
        
        if(op=="push"){
            cin>>num;
            vec.push_back(num);
        }else if(op=="pop"){
            if(vec.size()==0)
                cout<<"-1"<<'\n';
            else{
                cout<<vec[vec.size()-1]<<'\n';
                vec.pop_back();
            }
                
        }else if(op=="size"){
            cout<<vec.size()<<'\n';
        }else if(op=="empty"){
            if(vec.size()==0)
                cout<<"1"<<'\n';
            else
                cout<<"0"<<'\n';
        }else if(op=="top"){
            if(vec.size()==0)
                cout<<"-1"<<'\n';
            else{
                cout<<vec[vec.size()-1]<<'\n';
            }
        }
    }
}