#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int , int> m1;
    unordered_map<int , int>m2;
    vector<int>v1{1,2,2,1};
    vector<int>v2{2,2};
    for(int i=0;i<v1.size();++i)
    {
        m1[v1[i]]++;
    }
     for(int i=0;i<v2.size();++i)
    {
        m2[v2[i]]++;
    }
    for(auto it=m1.begin();it!=m1.end();++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    for(auto it=m2.begin();it!=m2.end();++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

}
