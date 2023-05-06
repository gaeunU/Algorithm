#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int add=0;
    int complex=1;
    
    for(int i=0; i<num_list.size();i++){
        add += num_list[i];
        complex *= num_list[i];
    }
   
    if(add*add>complex)
        answer = 1;
    
    return answer;
}