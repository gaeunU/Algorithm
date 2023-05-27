#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for(int i=0; i<numbers.size(); i++){
        for(int j=numbers.size()-1; j>i; j--){
            int temp = numbers[i]+numbers[j];
            if(find(answer.begin(), answer.end(), temp) == answer.end()){
                answer.emplace_back(temp);
            }
        }
    }
    sort(answer.begin(),answer.end());
    return answer;
}