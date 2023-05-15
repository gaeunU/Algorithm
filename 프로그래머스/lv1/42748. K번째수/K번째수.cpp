#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(int i=0; i<commands.size();i++){
        vector<int> temp;
        for(int j=commands[i][0]; j<=commands[i][1] ; j++){
            // 구간에 해당하는 원소만 temp 벡터에 넣고
            temp.emplace_back(array[j-1]);
        }
        // 오름차순으로 정렬한다.
        sort(temp.begin(),temp.end());
        
        // 그 중 해당 번지의 원소를 출력한다.
        answer.emplace_back(temp[commands[i][2]-1]);
    }
    return answer;
}