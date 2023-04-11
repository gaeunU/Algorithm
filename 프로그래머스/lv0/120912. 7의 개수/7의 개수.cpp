#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    for(int i=0; i<array.size();i++){
        while(array[i] != 0){
            if(array[i]%10 == 7)
                answer +=1;
            array[i] /= 10;
        }
    }
    return answer;
}