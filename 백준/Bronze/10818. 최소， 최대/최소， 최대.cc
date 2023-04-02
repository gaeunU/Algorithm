#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    vector <int>a;
    
    cin>>N;
    
    for(int i=0; i<N; i++){
        int idx;
        cin>>idx;
        a.push_back(idx);
    }
    
    sort(a.begin(),a.end());
    cout<<a[0]<<" "<<a[N-1];
    
    return 0;
}