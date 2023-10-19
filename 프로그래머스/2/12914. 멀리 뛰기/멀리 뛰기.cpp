#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    int dy[2001];
    int i;
    
    dy[1]=1;
    dy[2]=2;
    
    for(i=3;i<=n;i++){
        dy[i] = (dy[i-1]+dy[i-2])%1234567;
    }
    
    answer = dy[n];
    
    return answer;
}