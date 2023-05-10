#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    sort(num_list.begin(), num_list.end());
    for(int i=0; i<5;i++)
        num_list.erase(num_list.begin());
    answer = num_list;
    return answer;
}