#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    int x , y;
    if (a < c){
        cout<<1<<" ";
    }else{
        cout<<"-1 ";
    }
    if (c  < a*b){
        cout<<b;
    }else cout<< -1;
    cout<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}