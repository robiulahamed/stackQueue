//https://www.hackerrank.com/contests/smart-interviews/challenges/si-min-cost-to-connect-rods
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
        long long n;cin>>n;
        priority_queue<long long,vector<long long>,greater<long long> >pq;

        for(int i=0; i<n; i++){
            int x;cin>>x;
            pq.push(x);
        }
        long long s =0;
        while(pq.size()>1){
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();
            s+=a+b;
            pq.push(a+b);
        }
        cout<<s<<endl;
    }
    return 0;
}