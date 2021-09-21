#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{-8,-6,2,3,4,5};
    set<int>s;
    for(auto i:v)
    {
        s.insert(i);

    }
     for(auto i:s)
   {
      cout<<i<<" " ;

    }
 /*int value;
 int prod=1;
 int count=3;


              for ( auto it=s.rbegin(); it!=s.rend(); ++it)
                {
                value=*it;
                prod=prod*value;
                }



    cout << prod;
*/

}
