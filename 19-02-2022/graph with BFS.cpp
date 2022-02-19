#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>vec[n+1];
    int u,v;
    for(int i=1;i<=m;++i){
        cin>>u>>v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    vector<int>vis(n+1,0);
    vector<int>bfs;
    for(int i=1;i<=n;++i){
        if(!vis[i]){
           queue<int>q;
           q.push(i);
           vis[i]=1;
           while(!q.empty()){
            int node= q.front();
            q.pop();
            bfs.push_back(node);

            for(auto it:vec[node]){
                q.push(it);
                vis[it]=1;
            }
           }
        }
    }

    for(auto it:bfs){
        cout<<it<<" ";
    }

}
