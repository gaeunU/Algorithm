#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

struct Data{
    int n;
    int p;
    
    Data(int a, int b){
        n = a;
        p = b;
    }
};

int solution(vector<int> priorities, int location) {
    int answer = 0;
    bool flag = true;
    
    queue<Data> Q;
    vector<Data>map;
    int size = priorities.size();
    
    int i,j;
    for(i=0; i<size;i++){
        map.push_back(Data(i,priorities[i]));
        Q.push(Data(i,priorities[i]));
    }
    
    while(!Q.empty()){
        flag = true;
        
        // 고유의 인덱스
        int nowindex = Q.front().n;
        int nowpriority = Q.front().p;
        
        // 앞에 있는 값 터짐
        Q.pop();
        
        for(i=0; i<size;i++){
            if(map[i].p>nowpriority) {
                Q.push(Data(nowindex,nowpriority));
                flag = false;
                break;
            }
        }
        
        if(flag==true){
            answer +=1;
            map[nowindex].p=-1;
            if(location == nowindex) return answer;
        }
    }

    return answer;
}