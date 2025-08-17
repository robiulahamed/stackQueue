#include<bits/stdc++.h>//https://atcoder.jp/contests/abc234/tasks/abc234_d
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    int k;cin>>k;
    priority_queue<int,vector<int>,greater<int>>pq;
    vector<int>v(t);
    for(int i=0; i<t; i++){
          cin>>v[i];
    }
    for(auto i:v){
        pq.push(i);
        if(pq.size()>k){
            pq.pop();
        }
        if(pq.size()==k){
            cout<<pq.top()<<endl;
        }

    }
    return 0;
}