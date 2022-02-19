#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>mat;
    int n;
    cout<<"Enter total number of nodes: "<<endl;
    cin>>n;
    for(int i=0;i<=n;++i){
            vector<int>temp;
        for(int j=0;j<=n;++j){
            temp.push_back(0);
        }
        mat.push_back(temp);
    }

    int totalEdge;
    cout<<"enter total edges "<<endl;
    cin>>totalEdge;

    int u,v;
            cout<< "enter node and edge: "<<endl;

    for(int i=1;i<=totalEdge;++i){
        cin>>u>>v;
        mat[u][v]=1;
        mat[v][u]=1;
    }

    for(auto it:mat){
        for (auto it1:it){
            cout<<it1<<" ";
        }
        cout<<endl;
    }


}
