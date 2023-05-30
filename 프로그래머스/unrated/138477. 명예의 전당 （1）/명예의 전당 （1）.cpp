#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> zone;
    
    for(int i=0; i<score.size(); i++){
        if(zone.size()<k)
            zone.emplace_back(score[i]);
        else if (zone[0] < score[i]){
            zone.erase(zone.begin());
            zone.emplace_back(score[i]);
        }
        
        sort(zone.begin(), zone.end());
        answer.emplace_back(zone[0]);
    }
    
    return answer;
}