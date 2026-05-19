#include <bits/stdc++.h>
using namespace std;
//correct....

void bfs(int V,vector<vector<int>>&adjlist,queue<int>&q,vector<int>&ans,vector<int>&vis){
    vis[V]=1;
     while(!q.empty()){
        int el=q.front();
        ans.push_back(el);
        q.pop();
        int size=adjlist[el].size();
        for (int i=0;i<size;i++){
            if (!vis[adjlist[el][i]]){
                 vis[adjlist[el][i]]=1;
                 q.push(adjlist[el][i]);
            }
        }
     }
}
int main(){
    int V=7;
    vector<vector<int>> edges = {
    {0, 1},
    {0, 2},
    {1, 3},
    {1, 4},
    {2, 4},
    {2, 5},
    {4, 6}
};

  int n=edges.size();
  vector<vector<int>>adjlist(V);
  for (int i=0;i<n;i++){
    int u=edges[i][0];
    int v=edges[i][1];
    adjlist[u].push_back(v);
    adjlist[v].push_back(u);
  }
  //printing the adjlist
  for (int i=0;i<V;i++){
    for (auto it:adjlist[i]){
        cout<<it<<" ";
    }
    cout<<endl;
  }

  //starting wiht bfs..
  int src=0;
  queue<int>q;
  q.push(src);
  vector<int>vis(V,0);
  vector<int>ans;
  bfs(src,adjlist,q,ans,vis);
  int num=ans.size();
  for(int i=0;i<num;i++){
    cout<<ans[i]<<" ";
  }
  return 0;
}
