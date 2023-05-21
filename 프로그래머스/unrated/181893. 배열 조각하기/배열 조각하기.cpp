#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    
    for(int i=0; i<query.size(); i++){
        if(i%2==0){
            int s = arr.size();
            for(int j=query[i]+1; j<s; j++)
                arr.pop_back();
        }else{
           for(int j=0; j<query[i]; j++)
               arr.erase(arr.begin());
        }
    }
    answer = arr;
    return answer;
}