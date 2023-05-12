#include <iostream>
#include <vector>

using namespace std;

int n;

int main(void) {
  cin>>n;
  vector <int> arr;
  vector <int> d;
  
  for(int i=0; i<n; i++){
      arr.push_back(i+1);
  }
  
  while(arr.size() != 1){
      // 버릴 카드 저장
      d.push_back(arr[0]);
      //첫번째 카드를 버려
      arr.erase(arr.begin());
      //지금의 맨 앞카드를 맨 뒤로 옮겨
      arr.push_back(arr[0]);
      arr.erase(arr.begin());
    }
    
    for(int i=0; i<n-1; i++){
        cout<<d[i]<<" ";
    }
    cout<<arr[0];
}