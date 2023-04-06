#include <string>
#include <vector>

using namespace std;

int gdc(int a, int b){
    int c;
    while(b!=0){
        c=a%b;
        a=b;
        b=c;
    }

    return a;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int k;
    k = gdc(n,m);
    int glc = (n*m)/k;
    
    answer.push_back(k);
    answer.push_back(glc);
    return answer;
}