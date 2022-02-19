#include<bits/stdc++.h>
using namespace std;


void Print(int n){
    if(n==0){
        return;
    }
    Print(n-1);
    cout<<n<<" ";
}

int main(){
    int n=5;
    Print(5);
}

