#include<bits/stdc++.h>
using namespace std;


bool CheckSorted(vector<int>v, int n){
    if(n==0)
        return true;
   return (v[n]>v[n-1]) && CheckSorted(v,n-1);
}

int main(){

    vector<int>vec{1,2,3,4,15,16,17};
    int n=vec.size()-1;
    cout<<CheckSorted(vec,n);


}


