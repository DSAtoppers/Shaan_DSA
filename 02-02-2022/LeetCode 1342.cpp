#include<bits/stdc++.h>
using namespace std;


int CountZeroes(int n,int &Count){
   if(n==0){
     return Count;
   }
   Count++;

   if(n%2==0){
    return  CountZeroes(n/2,Count);
   }

   return  CountZeroes(n-1,Count);


}

int main(){

    int n=8;
    int Count=0;
  cout<< CountZeroes(n,Count);

}


