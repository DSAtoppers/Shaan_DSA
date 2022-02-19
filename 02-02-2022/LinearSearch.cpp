#include<bits/stdc++.h>
using namespace std;


vector<int> LinearSearch(vector<int>v, int n,int key,vector<int>&temp){
    if(n==v.size())
        return temp;
   if (key==v[n]){
        temp.push_back(n);
   }
    return LinearSearch(v,n+1,key,temp);
}

int main(){

    vector<int>vec{1,2,3,4,1,6,1};
    vector<int>temp;
    int key=1;
    int n=0;
    LinearSearch(vec,n,key,temp);
    if(temp.size()==0)return -1;
    for(int i=0;i<temp.size();++i){
        cout<<temp[i]<<" ";
    }


}


