#include<bits/stdc++.h>
using namespace std;

void Dfs(int node,vector<int>adj[],vector<int>&vis,vector<int>&storeDfs){
    storeDfs.push_back(node);
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            Dfs(it,adj,vis,storeDfs);
        }
    }
}


bool DfsCycle(int node,int parent,vector<int>&vis2,vector<int>adj[]){
    vis2[node]=1;
    for(auto it:adj[node]){
        if(vis2[it]==0){
            if(DfsCycle(it,node,vis2,adj))return true;
        }else if(it!=parent){
            return true;
        }
    }
    return false;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    int u,v;
    for(int i=1;i<=m;++i){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(auto i=0;i<=n;++i){
        cout<<i<<" ";
        for(int j=0;j<adj[i].size();++j){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    vector<int>storeDfs;
    vector<int>vis(n+1,0);

    for(int i=1;i<=n;++i){
        if(!vis[i]){
            Dfs(i,adj,vis,storeDfs);
        }
    }

    for(auto it:storeDfs){
    cout<<it<<" ";
    }

    vector<int>vis2(n+1,0);

    for(int i=1;i<=n;++i){
        if(!vis2[i]){
            if(DfsCycle(i,-1,vis2,adj)==1)
                cout<<"Cycle detected"<<endl;
                return 0;
        }
    }
    cout<<"Cycle is not present in Bfs"<<endl;
}


