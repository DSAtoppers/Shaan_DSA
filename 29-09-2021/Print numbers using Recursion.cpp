#include<bits/stdc++.h>
using namespace std;

void Print1(int x)
{
    if(x==1)
    {
        cout<<x<<" " ;
        return ;
    }
    Print1(x-1);
   cout<< x<<" ";

}


void Print2(int x)
{
    if(x==1)
    {
        cout<<x<<" " ;
        return ;
    }
    cout<< x<<" ";
    Print2(x-1);


}
int main()
{
    int n;
    cin>>n;
   Print1(n);
   cout<<endl;
   Print2(n);

}
