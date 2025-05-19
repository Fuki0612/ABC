#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    vector<vector<char>> A(H, vector<char>(W));
    
    for (int i = 0; i < H; i++){
      for (int j = 0; j < W; j++){
        cin >> A[i][j];
      }
    }
    
    queue<pair<int, int>> q;
    
    for (int i = 0; i < H; i++){
      for (int j = 0; j < W; j++){
        if(A[i][j] == 'E'){
          q.push({i, j});
        }
      }
    }
    
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    
    while(!q.empty()){
      int x = q.front().first, y = q.front().second;
      q.pop();
        
      for(int d = 0; d < 4; d++){
        int nx = x + dx[d], ny = y + dy[d];
        if(nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
        if(A[nx][ny] == '#') continue;
        if(A[nx][ny] == '.'){
          if(x == nx + 1)      A[nx][ny] = 'v';
          else if(x == nx - 1) A[nx][ny] = '^';
          else if(y == ny + 1) A[nx][ny] = '>';
          else if(y == ny - 1) A[nx][ny] = '<';
          q.push({nx, ny});
        }
      }
    }
    
    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            cout << A[i][j];
        }
        cout << endl;
    }
    return 0;
}