#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector <int> v;

int main()
{
    cin>>N;
    
    while(N>0){
        v.emplace_back(N%10);
        N /= 10;
    }
    sort(v.begin(),v.end(),greater<>());
    for(int i=0; i<v.size();i++){
        cout<<v[i];
    }
    return 0;
}