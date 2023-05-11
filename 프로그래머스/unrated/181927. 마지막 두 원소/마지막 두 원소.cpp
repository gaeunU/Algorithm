#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int i = num_list.size()-1;
    if(num_list[i]>num_list[i-1])
        num_list.push_back(num_list[i]-num_list[i-1]);
    else
        num_list.push_back(num_list[i]*2);
    answer = num_list;
    return answer;
}