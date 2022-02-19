#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>pq;
    string s="acccccaaaaaab";
    for(auto it:s){
        pq.push(it);
    }

    s.clear();

    while(!pq.empty()){
        s.push_back(pq.top());
        pq.pop();
    }
    cout<<s;
}
