#include<bits/stdc++.h>
using namespace std;
int main(){

   int n,m;
   cin>>n>>m;
   int mat[n+1][n+1];

   for(int i=0;i<=n;++i){

    for(int j=0;j<=n;++j){

      mat[i][j]=0;

    }

   }
   int u,v;
   for(int i=0;i<m;++i){
     cin>>u>>v;
     mat[u][v]=1;
     mat[v][u]=1;
   }

   for(int i=0;i<=n;++i){
    for(int j=0;j<=n;++j){
       if(mat[i][j]==1){
            cout<<i<<"---"<<j<<" ";
       }

    }
    cout<<endl;
   }



}
