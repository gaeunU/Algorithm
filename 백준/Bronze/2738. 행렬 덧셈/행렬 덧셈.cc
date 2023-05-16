#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N,M,T;
    vector<vector<int>>arr1;
    vector<vector<int>>arr2;
    vector<int> temp;
    
    cin>>N>>M;
    
    // 행렬 A
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
          cin>>T;
          temp.emplace_back(T);
        }
        
        arr1.emplace_back(temp);
        temp.clear();
    }
    
    // 행렬 B
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
          cin>>T;
          temp.emplace_back(T);
        }
        
        arr2.emplace_back(temp);
        temp.clear();
    }
    
    // 합
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
          cout<<arr1[i][j] + arr2[i][j]<<" ";
        }
        cout<<'\n';
    }
    
    
    return 0;
}