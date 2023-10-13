#include<vector>
#include <queue>
using namespace std;

int dx[4] = {0,-1,0,1};
int dy[4] = {1,0,-1,0};

int ch[101][101];
int dist[101][101];

int n,m;


int solution(vector<vector<int> > maps)
{
    int i,j,x,xx,yy,curX,curY;
    
    queue<pair<int,int>>Q;
    
    int answer = 0;
    
    n = maps[0].size();
    m = maps.size();
 
    // 체크배열
    ch[0][0]=1;
    Q.push(make_pair(0,0));
    dist[0][0]=1;
    
    
    while(!Q.empty()){
        
        curX = Q.front().first;
        curY = Q.front().second;
        
        Q.pop();
        
        for(i=0;i<4;i++){
            
            xx = curX+dx[i];
            yy = curY+dy[i];
            
            if(xx<0 || xx>=m || yy<0 || yy>=n) continue;
            // 길이 막혀있음
            if(maps[xx][yy]==0) continue;
            
            // 방문한 곳임
            if(ch[xx][yy]==1) continue;
            
           
            ch[xx][yy] =1;
            Q.push(make_pair(xx,yy));
            dist[xx][yy] = dist[curX][curY]+1;
            
            //answer = min(answer,dist[xx][yy]);
        }
            
    }
    
    if(!dist[m-1][n-1]) answer =-1;
    else answer = dist[m-1][n-1];
    
    return answer;
}