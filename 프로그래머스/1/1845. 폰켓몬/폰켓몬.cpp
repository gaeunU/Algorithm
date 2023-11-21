#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int ch[200001] = {0};
    
    for(int i=0; i<nums.size();i++){
        if(ch[nums[i]] == 0) {
            ch[nums[i]]=1;
            //cout<<nums[i]<<'\n';
        }
    }
    
    for(int i=1; i<200001; i++){
        if(ch[i] == 1) answer +=1;
    }
    
    if(answer > nums.size()/2) answer = nums.size()/2;
    return answer;
}