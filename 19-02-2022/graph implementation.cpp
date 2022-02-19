#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>vec[n+1];
    int m;
    cin>>m;
    int u,v;
    int wt;
    for(int i=0;i<m;++i){
        cin>>u>>v>>wt;
        vec[u].push_back({v,wt});
        vec[v].push_back({u,wt});

    }

    for(int i=0;i<=n;++i){
        cout<<"["<<i<<"]"<<" ";
        for(int j=0;j<vec[i].size();++j){
            cout<<vec[i][j].first<<" "<<vec[i][j].second<<" ";
        }
        cout<<endl;
    }


}
