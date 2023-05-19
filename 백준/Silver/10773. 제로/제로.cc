#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    int K,num;
    vector<int> vec;
    
    cin>>K;
    
    for(int i=0; i<K; i++){
        cin>>num;
        
        if(num==0)
            vec.pop_back();
        else
            vec.push_back(num);
    }
    
    cout<<accumulate(vec.begin(),vec.end(),0);
}