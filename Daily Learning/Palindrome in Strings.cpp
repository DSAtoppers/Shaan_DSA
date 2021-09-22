#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="acbdbca";
    int i=0;
    int j=str.size()-1;
    while(i<j)
    {
        if(str[i]==str[j])
        {
            i++;
            j--;
        }
        else
        {
            cout<<"false";
            return -1;
        }
    }
    cout<<"true";

}
