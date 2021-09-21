#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{0,4,3,0,4};
    sort(v.begin(),v.end());
    vector<int>vec;
   for(int i=0;i<v.size();++i)
   {
        if(v[i]>0)
        {
           vec.push_back(v[i]);
        }
    }

   if(vec.size()==0)
   {

       return -1;
   }

   int num=vec.size();
   int loc=num;
  // cout<<loc<<" ";
    for(int i=0;i<num;++i)
    {
        if(v[i]>=loc && (v[i]==num-i) )
        {
            cout<<loc;
            return 1;
        }
        loc--;
    }
    cout<<-1;
}
