#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int temp = 100;
    
    sort(array.begin(), array.end());
    
    for(int i=0; i<array.size(); i++){
        int t = abs(n-array[i]);
        if(t<temp){ 
            temp = t;
            answer = array[i];
        }
            
    }
    return answer;
}