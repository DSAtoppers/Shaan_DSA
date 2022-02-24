#include<bits/stdc++.h>
using namespace std;
int main(){

  vector<vector<int>>edges={{1,2},{2,3},{4,2}};
   int m=edges.size();
        unordered_map<int,int>mat;
        for(int i=0;i<=2;++i){
            int u=edges[i][0];
            int v=edges[i][1];
            mat[u]++;
            mat[v]++;
        }
       int val;
        for(auto it=mat.begin();it!=mat.end();++it){
          cout<<it->first<<" "<<it->second<<endl;
        }

}
