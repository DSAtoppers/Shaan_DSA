#include<bits/stdc++.h>
using namespace std;


void CountZeroes(int n,int &Count){
   if(n==0){
     return;
   }
   if(n%10==0){
     ++Count;
   }
   CountZeroes(n/10,Count);
}

int main(){

    int n=0000;
    int Count=0;
   CountZeroes(n,Count);
    cout<<Count;
}


