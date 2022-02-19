#include<bits/stdc++.h>
using namespace std;

void Factorial(int N){
    if(N==0){
        cout<<"your count is over ";
        return;
    }
    int val =Factorial(N)*Factorial(N-1);
    cout<<val;
}




int main(){
    int N=5;
    Factorial(N);
}
