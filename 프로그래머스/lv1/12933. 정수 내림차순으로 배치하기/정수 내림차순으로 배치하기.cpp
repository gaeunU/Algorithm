#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    // vector<int> a;
    
    string a = to_string(n);
    sort(a.begin(),a.end(),greater<>());
    
    answer = stoll(a);
    return answer;
}