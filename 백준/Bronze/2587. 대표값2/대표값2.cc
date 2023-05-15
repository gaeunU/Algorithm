#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int N,k;
vector <int> v;

int main()
{
    for(int i=0; i<5; i++){
        cin>>k;
        v.emplace_back(k);
    }
    
    sort(v.begin(),v.end());
    
    cout<<accumulate(v.begin(),v.end(),0)/5<<'\n';
    cout<<v[2];
        
    return 0;
}