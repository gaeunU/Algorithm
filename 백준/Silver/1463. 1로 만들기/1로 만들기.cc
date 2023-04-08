#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x;
   cin >>x;
   vector<int> d(x + 1);
   d[1]=0;
   
   for(int i=2; i<=x; i++){
       // 현재 수에서 1을 빼는 경우.
       d[i] = d[i-1]+1;
       
       // 3로 나누어 떨어지는 경우
       if(i%3==0){
           d[i] = min(d[i],d[i/3]+1);
       }
       
       if(i%2==0){
           d[i] = min(d[i],d[i/2]+1);
       }
   }
   cout<<d[x]<<'\n';
    
    return 0;
}