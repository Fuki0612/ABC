#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  
  // 辺の数と頂点の数が一致しないとサイクルでない
  if(N != M){
    printf("No\n");
    return 0;
  }
  
  // graphのi番目にiと接続されている点を保存
  vector<vector<int>> graph(N+1);
  for(int i = 0; i < M; i++){
    int A, B;
    cin >> A >> B;
    graph[A].push_back(B);
    graph[B].push_back(A);
  }
  
  // 各点と接続している点の数が2でないならサイクルでない
  for(int v = 1; v <= N; v++){
    if(graph[v].size() != 2){
      printf("No\n");
      return 0;
    }
  }
  
  // q = 現在の探索位置（1から始める）
  // visited = i番目が探索したかどうか
  vector<bool> visited(N+1, false);
  queue<int> q;
  q.push(1);
  visited[1] = true;
  int cnt = 0;
  
  while(!q.empty()){
    int cur = q.front();
    q.pop();
    cnt++;
    for(auto nxt : graph[cur]){
      if(!visited[nxt]){
        visited[nxt] = true;
        q.push(nxt);
      }
    }
  }
  
  if(cnt == N) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  
  return 0;
}