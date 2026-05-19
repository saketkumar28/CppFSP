#include <bits/stdc++.h>
using namespace std;



void dfs(int src,vector<vector<int>>&adjlist,vector<int>&vis,vector<int>&ans){
   vis[src]=1;
   ans.push_back(src);
   int s=adjlist[src].size();
   for (int i=0;i<s;i++){
      if (!vis[adjlist[src][i]]){
          dfs(adjlist[src][i],adjlist,vis,ans);
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
   vector<vector<int>>adjlist(V);
   int n=edges.size();
   for (int i=0;i<n;i++){
    int u=edges[i][0];
    int v=edges[i][1];
    adjlist[u].push_back(v);
    adjlist[v].push_back(u);
   }
   //printing adjlist
   for (int i=0;i<V;i++){
      for (auto it :adjlist[i]){
        cout<<it<<" ";
      }
      cout<<endl;
   }

   //starting the dfs mate-->
   vector<int>ans;
   vector<int>vis(V,0);
   int src=0;
   dfs(src,adjlist,vis,ans);
   int num=ans.size();
   for (int i=0;i<num;i++){
    cout<<ans[i]<<" ";
   }
 
}