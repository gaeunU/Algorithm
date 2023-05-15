#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for(int i=0; i<strArr.size(); i++){
        for(int j=0; j <strArr[i].size(); j++){
            // 홀수번째 인덱스 -> 대문자로 변환
            if(i%2 !=0 && strArr[i][j]>96){
                strArr[i][j] -= 32;
            }else if (i%2==0 && strArr[i][j]<91){
                // 짝수번째 인덱스 -> 소문자로 변환
                strArr[i][j] += 32;
            }
        }
    }
    answer = strArr;
    return answer;
}