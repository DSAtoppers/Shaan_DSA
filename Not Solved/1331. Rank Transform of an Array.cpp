#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{40,10,20,30};
    vector<int>vec;
    for(auto i:v)
    {
       vec.push_back(i);
    }
    sort(vec.begin(),vec.end());
    int count=1;
    for(auto i:vec)
    {
      //  cout<<i<<" ";


       auto it=find(v.begin(),v.end(),i);

      v[*it]=count;
      cout<<*it;

     /* // cout<<*it<<" ";*/

       if(i!=i+1)
       {
           count++;
       }
    }
    cout<<endl;
    for(auto i=0;i<vec.size();++i)
    {
        cout<<vec[i]<<" ";
    }
}

