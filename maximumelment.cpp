//https://vjudge.net/problem/HackerRank-maximum-element
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    priority_queue<int>pq;vector<int>v;
    stack<int>st,ms;
    

    while(t--){
        int n;cin>>n;
        if(n==1){
            int x;cin>>x;
            st.push(x);
            if(ms.empty() || x>=ms.top()){
                      ms.push(x);
                }
        }
        else if(n==2){
            int val=st.top();
            st.pop();
            if(val==ms.top()) ms.pop();
        }
        else{
            cout<<ms.top()<<endl;
            
        
        }
    }
    return 0;
}