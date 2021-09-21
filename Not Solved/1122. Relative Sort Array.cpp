#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{22,28,8,6};
    vector<int>vMain{28,6,22,8,44,17};
       unordered_map<int,int>m;
      for(int i=0;i<vMain.size();++i)
      {
          m[v[i]]++;
      }
    vector<int>vec;
    int loc=0;
    for(int i=0;i<v.size();++i)
    {
        int count=m[v[i]];
        loc=loc+count;
        while(count>0)
        {
            vec.push_back(v[i]);
           // cout<<v[i]<<" ";
            count--;
        remove(vMain.begin(),vMain.end(),v[i]);
        }



    }
    sort(vMain.begin(),vMain.end());
   // for(int i=0;i<vMain.size();++i)
  //  {
    //    vec.push_back(vMain[i]);
   // }
    cout<<endl;
    int temp=vMain.size()-loc;
    for(int i=0;i<temp;++i)
    {
         vec.push_back(vMain[i]);
    }
        for(int i=0;i<vec.size();++i)
    {
        cout<<vec[i]<<" ";
    }


}
