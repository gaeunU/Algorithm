#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  
  int N,a,b;
  vector<int> vec;
  
  cin>>N;
  
  for(int i=0; i<N; i++){
      cin>>a>>b;
      vec.emplace_back(a+b);
  }
  
  for(int i=0; i<N; i++){
      cout<<vec[i]<<'\n';
  }
  return 0;
}