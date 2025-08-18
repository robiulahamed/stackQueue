//https://www.codechef.com/problems/CCOP8
#include<bits/stdc++.h>
#define long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
          int n;cin>>n;
          priority_queue<int>pq;
          for(int i=0; i<n; i++){
            int x;cin>>x;
            pq.push(x);
          }
        vector<int>v;
        while(!pq.empty()){
          
          int b = pq.top();
          int a=b/2;

          v.push_back(b);
          
        if(a !=0){
          pq.push(a);
        }
        pq.pop();
          
        }
        for(auto i:v){
          pq.push(i);
        }
        while(!pq.empty()){
          cout<<pq.top()<<endl;
          pq.pop();
        }
        cout<<endl;


    }
    return 0;
}