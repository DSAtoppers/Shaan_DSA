#include<bits/stdc++.h>
using namespace std;


void Reverse(int n,int &sum){
   if(n==0){
     return;
   }

   int rem=n%10;
   sum=sum*10+rem;
   Reverse(n/10,sum);



}

bool palin(int n){
    int sum=0;
    Reverse(n,sum);
    return n==sum;
}

int main(){

    int n=1235321;
   return palin(n);

}



