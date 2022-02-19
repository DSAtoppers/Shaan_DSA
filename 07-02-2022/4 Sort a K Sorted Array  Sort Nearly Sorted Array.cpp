#include<bits/stdc++.h>
using namespace std;
int main(){
    int k=3;
    int p=0;
    vector<int> nums= {6,5,3,2,8,10,9};
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<nums.size();++i){
        pq.push(nums[i]);
        if(pq.size()>k){
            nums[p]=pq.top();
            p++;
            pq.pop();
        }
    }
    while(!pq.empty()){
        nums[p]=pq.top();
        p++;
        pq.pop();
    }
    for(auto it:nums){
        cout<<it<<" ";
    }

}
