#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int i,j;
    vector<int> dy(n+1);
    
    dy[0]=0;
    dy[1] =1;
    
    for(i=2;i<=n;i++){
        dy[i] = (dy[i-1] + dy[i-2])%1234567;
    }
    
    answer = dy[n];
    
    return answer;
}