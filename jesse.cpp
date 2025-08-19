//https://www.hackerrank.com/challenges/jesse-and-cookies/problem
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    long long n,k;
    cin>>n>>k;
    priority_queue<long long,vector<long long>,greater<long long> >pq;
    for(long long i=0; i<n; i++){
        long long x;cin>>x;
        pq.push(x);
    }
    int ans=0,c=0;
    while(pq.top()<k && !pq.empty()){
        long long a = pq.top();
        pq.pop();
        if(pq.empty()){
            ans=1;
            break;
        }
        long long b =pq.top();
            pq.pop();
            pq.push(a+2*b);
       
        c++;
    }
    if(ans){
        cout<<-1<<endl;

    }
    else cout<<c<<endl;
    
    return 0;
}