#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string str1,str2;
    int int1, int2;
  
    
    str1 = to_string(a)+to_string(b);
    str2 = to_string(b)+to_string(a);
    
    int1 = stoi(str1);
    int2 = stoi(str2);
    
    if(int1 > int2)
        answer = int1;
    else
        answer = int2;
    
    return answer;
}