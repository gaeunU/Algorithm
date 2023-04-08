#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x;
   cin >>x;
   int d[1000];
   
   d[1]=1;
   d[2]=2;
   
   for(int i=3; i<x+1;i++){
       d[i] = (d[i-1]+d[i-2])%10007;
   }
   
   cout<<d[x];
    return 0;
}