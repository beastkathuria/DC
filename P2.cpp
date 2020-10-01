#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    if (arr[0] < arr[n-1]) cout<<"Yes"<<endl;
    else{
        cout<<"No"<<endl;
    }
    return;
}
// changes
int main(){
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}