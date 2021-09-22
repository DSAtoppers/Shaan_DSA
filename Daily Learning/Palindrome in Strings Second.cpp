#include<bits/stdc++.h>
using namespace std;
int main()
{
     string str="aacbdbcaa";
    string str_rev;
    int n=str.size();
    for(int i=n-1;i>=0;--i)
    {
        str_rev.push_back(str[i]);
    }
    if(str==str_rev)
    {
        return true;
    }
    else
    {
        return false;
    }
}
