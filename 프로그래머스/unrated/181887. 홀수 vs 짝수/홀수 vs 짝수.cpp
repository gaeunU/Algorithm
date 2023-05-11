#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int odd,even;
    
    for(int i=0; i<num_list.size();i++){
        // 홀수 합
        if(i%2==0)
            even += num_list[i];
        else
            odd += num_list[i];       
    }
    if(even>=odd)
        return even;
    else
        return odd;
    
}