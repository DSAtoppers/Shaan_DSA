#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "26th May 1960";
           vector<string>month{"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        vector<string>v;
        string str;

             for(int i=0;i<s.size();++i)
        {
            if(s[i]!=' ')
            {
                str.push_back(s[i]);
            }
            if(s[i]==' ' || i==s.size()-1)
            {
                v.push_back(str);
                str.clear();
            }
        }
        for(int i=0;i<v.size();++i)
        {
            string temp=v[i];
            cout<<temp;
        }

}
