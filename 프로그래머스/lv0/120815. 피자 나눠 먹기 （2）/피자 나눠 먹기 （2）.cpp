#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    // pizza 6조각
    int pizza =6;
    
    // 만약 피자가 30조각이 되었을땐 10과 나누면 0으로 나눠떨어짐
    while(pizza%n !=0){
        pizza += 6;
    }
   
    return pizza/6;
}