#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    if(arr1.size()>arr2.size())
        answer =1;
    else if(arr1.size()<arr2.size())
        answer =-1;
    else{ // 두 원소의 길이가 같으면
        if(accumulate(arr1.begin(), arr1.end(), 0.0) > accumulate(arr2.begin(), arr2.end(), 0.0))
            answer =1;
        else if (accumulate(arr1.begin(), arr1.end(), 0.0) < accumulate(arr2.begin(), arr2.end(), 0.0))
            answer=-1;
        
    }

    return answer;
}