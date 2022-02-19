#include<bits/stdc++.h>
using namespace std;


int Sum(int n){
   if(n==0){
     return 0;
   }


   return n%10+Sum(n/10);


}

int main(){

    int n=47612;
    cout<<Sum(n);
}

