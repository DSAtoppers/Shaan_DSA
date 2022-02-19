#include<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<int>&vis,vector<int>adj[],vector<int>&storeDfs){
    storeDfs.push_back(node);
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,vis,adj,storeDfs);
        }
    }

}
int main(){
    int n,m;
    cin>>n>>m;
    int u,v;
    vector<int>adj[n+1];
    for(int i=1;i<=m;++i){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=0;i<=n;++i){
        cout<<i<<" ";
        for(int j=0;j<adj[i].size();++j){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    vector<int>vis(n+1,0);
    vector<int>storeDfs;

    for(int i=1;i<=n;++i){
        if(!vis[i]){
            dfs(i,vis,adj,storeDfs);
        }
    }

    for(auto it:storeDfs){
        cout<<it<<" ";
    }
}
