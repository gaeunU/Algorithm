#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N,k;
vector <int> v;

int main()
{
    cin>>N;
    
    for(int i=0; i<N; i++){
        cin>>k;
        v.emplace_back(k);
    }
    sort(v.begin(),v.end());
    
    for(int i=0; i<N; i++)
        cout<<v[i]<<'\n';
        
    return 0;
}