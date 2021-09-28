#include<bits/stdc++.h>
using namespace std;

int Factorial(int n)
{
   if(n==0 || n==1)
   {
       return n;
   }
   return Factorial(n-1)+Factorial(n-2);
}


int main()
{
    int n;
    cin>>n;
    cout<<Factorial(n)<<endl;;

}
