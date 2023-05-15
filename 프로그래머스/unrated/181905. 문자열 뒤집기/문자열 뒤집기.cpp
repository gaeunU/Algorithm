#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = my_string;
    int j = e;
    for(int i=s; i<=e; i++){
        my_string[i] = answer[j];
        j--;
    }
    answer = my_string;
    return answer;
}