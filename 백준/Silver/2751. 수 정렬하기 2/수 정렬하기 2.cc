#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
    int N;
    vector<int> num;
    
    cin>>N;
    for(int i=0; i<N; i++){
        int idx;
        cin>>idx;
        num.push_back(idx);
    }
    
    sort(num.begin(),num.end());
    for(int i=0; i<num.size();i++)
        cout<<num[i]<<"\n";
    
    

    return 0;
}