//https://cses.fi/problemset/task/1164
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    long long t,n;cin>>t;
    n=t;
    
    
      vector<pair<int,int>>v;
      for(int i=0; i<n; i++){
        long long a,b;
        cin>>a>>b;
        v.push_back({a,b});
        
      }
      int  c=0;

      priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int> >>pq;
  for(auto [a,b]:v){
        if(!pq.empty() && pq.top().first<a){
          pair<int,int>p=pq.top();
          int date = p.first;
          int rm =p.second;
          pq.pop();
          pq.push({date,rm});
        }
        else{
          c++;
          pq.push({a,b});

        }
  }
          
    
    
    
    return 0;
}