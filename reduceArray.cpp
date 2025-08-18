//https://www.spoj.com/problems/REDARR2/en/
#include<iostream>
#include<queue>
#include<vector>
#include <functional>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        long long n;cin>>n;
        priority_queue<long long,vector<long long>,greater<long long> >pq;
        for(int i=0; i<n;i++){
            long long a;cin>>a;
            pq.push(a);
        }
        long long sum=0;
        while(pq.size() >1){
            long long a=pq.top();
            pq.pop();
            long long b =pq.top();
            pq.pop();
            sum+=a+b;
            pq.push(a+b);
        }
        cout<<sum<<endl;
    }
    return 0;
}