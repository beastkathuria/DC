#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
        if (i % 2 == 0){
            if (arr[i] < 0){
                arr[i] = -arr[i];
            }
        }
        else{
            if (arr[i]>0){
                arr[i] = -arr[i];
            }
        }
    }

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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