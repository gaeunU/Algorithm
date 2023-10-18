#include <string>
#include <vector>

using namespace std;

int dx[8]={1, 1, 1, 0, 0, -1, -1, -1};
int dy[8]={1, 0, -1, 1, -1, 1, 0, -1};


int solution(vector<vector<int>> board) {
    int answer = 0, cnt=0,xx,yy;
    int s = board.size();
    
    for(int i=0;i<s;i++){
        for(int j=0; j<s;j++){
            
            if(board[i][j] == 1) {           
                for(int k=0; k<8;k++){
                    xx = i+dx[k];
                    yy = j+dy[k];
                    
                    if(xx>=0 && xx<s && yy>=0 && yy<s) if(board[xx][yy]!=1) board[xx][yy]=2;
                }
            }
        }
    }
    
    for(int i=0;i<s;i++){
        for(int j=0; j<s;j++){
            if(board[i][j]==0) answer +=1;
        }
    }
    return answer;
}