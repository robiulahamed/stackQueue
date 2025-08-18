//https://www.hackerrank.com/contests/smart-interviews/challenges/si-implement-min-heap
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    priority_queue<int>pq;
    while(t--){
         string s;cin>>s;
         if(s=="insert"){
            int a;cin>>a;
            pq.push(-a);
         }
         else if(s=="getMin"){
            if(pq.empty()){
                cout<<"Empty"<<endl;
            }
            else
            cout<<-pq.top()<<endl;
         }
         else{
            if(!pq.empty())
            pq.pop();
         }
    }
    return 0;
}