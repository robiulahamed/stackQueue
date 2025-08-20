//https://codeforces.com/problemset/problem/1353/D
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
    int n;cin>>n;
    priority_queue<pair<int,pair<int,int> > >pq;
    
    int ar[n+4]={0},x=1;
    pq.push({n,{-1,-n}});
    while(!pq.empty()){
        int l = pq.top().second.first;
        int m = pq.top().second.second;
        pq.pop();
        int  idx = (l+m)/2;
        ar[idx]=x;
        x++;
        if(l==m) continue;
        if(l<idx){
            pq.push({idx-l,{-l,-(idx-1)}});
        }
        if(idx<m){
            pq.push({m-idx,{-(idx+1),-m}});
        }
    }
    for(int i=1; i<=n; i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    }
    
}