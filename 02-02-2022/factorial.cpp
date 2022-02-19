#include<bits/stdc++.h>
using namespace std;


int Factorial(int n){
    if(n<=1){
        return n;
    }
    return n*Factorial(n-1);



}

int main(){
    int n=5;

    cout<<Factorial(5);
}

