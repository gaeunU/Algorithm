#include <string>
#include <vector>
#include <queue>

using namespace std;

/*
struct Edge{
    int v;
    int val;
    
    Edge(int a, int b){
        v = a;
        val = b;
    }
    
    // 가중치가 작은 순서대로
    bool operator< (const Edge &b)const{
        return val>b.val;
    }
};
*/

vector<int> solution(int n, vector<vector<int>> roads, vector<int> sources, int destination) {
    vector<int> answer;
    vector<int> map[100001];

    queue< pair <int ,int>> Q;
    
    int i,j,a,b,c;
    
    vector<int> dist(n+1, 2147000000);
    
    for(i=0;i<roads.size();i++){
        // 양방향
        map[roads[i][0]].push_back(roads[i][1]);
        map[roads[i][1]].push_back(roads[i][0]);
    }
    
    dist[destination] =0;
    Q.push({destination,0});
    
    while(!Q.empty()){
        
        // 현재의 탑
        int now = Q.front().first;
        int nowval = Q.front().second;
        Q.pop();
        
        
        for(i=0; i<map[now].size();i++){
            int next = map[now][i];
            
            if(dist[next] == 2147000000 || dist[next]>nowval){
                dist[next] = nowval+1;
                Q.push({next,nowval+1});
            }
        }
        
    }
    
    for(i=0;i<sources.size();i++){
        if(dist[sources[i]] == 2147000000) answer.push_back(-1);
        else answer.push_back(dist[sources[i]]);
    }
    
    return answer;
}