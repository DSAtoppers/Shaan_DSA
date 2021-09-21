#include<bits/stdc++.h>
using namespace std;
int main()
{
    int value=13;
    int rem;
    vector<int>v;
    while(value>0)
    {
       // cout<<1<<" ";
        rem=value%2;
        value=value/2;
        v.push_back(rem);
    }
    int count=0;
    for(auto i:v)
    {
       if(i==1)
        count++;
    }
    cout<<count;
}
