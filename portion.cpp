//https://codeforces.com/problemset/problem/1526/C2
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    long long n; cin>>n;
    priority_queue<int>pq;
    vector<int>v(n);
    for(int i=0; i<n;  i++) cin>>v[i];
    long long s=0;
    int c=0;
    for(int i=0; i<n;   i++){
        s+=v[i];
        c++;
        if(v[i]<0){
            pq.push(-v[i]);
        
        }
        cout<<s<<endl;
        while(s<0){
            s+=pq.top();
            pq.pop();
            c--;
        }
    }
    cout<<c<<endl;
    return 0;
}