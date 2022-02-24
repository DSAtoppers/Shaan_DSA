#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5,6,7,8,9,10};
    int slow=0;
    int fast=0;
    int n=vec.size();
    while(slow<=n && fast+2<=n){
       slow=slow+1;
       fast=fast+2;
    }
    cout<<vec[slow];
}
