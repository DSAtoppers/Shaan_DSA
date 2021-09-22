#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="abcdefghi";
    string str_rev;
    int n=str.size();
    for(int i=n-1;i>=0;--i)
    {
        str_rev.push_back(str[i]);
    }
    cout<<str_rev;
}
