#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{87063,61094,44530,21297,95857,93551,9918};
    int k=6;
    if(k==1)
        {
            return 0;
        }
        sort(v.begin(),v.end());
       for(auto x:v)
       {
           cout<<x<<" ";
       }
}
