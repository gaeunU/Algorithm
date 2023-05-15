#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N,k,value;
vector <int> v;

int main()
{
    cin>>N>>k;
    
    for(int i=0; i<N; i++){
        cin>>value;
        v.emplace_back(value);
    }
    sort(v.begin(),v.end(),greater<>());
    // 76 85 93 98 100
    // N -1 -1 -k  = N-k-2
    cout<<v[k-1];
    return 0;
}