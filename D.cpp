#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
ll mss(vector<ll> a) {
	ll ans=0, msf=0;
	for(ll b : a) {
		msf=max(msf+b, 0ll);
		ans=max(msf, ans);
	}
	return ans;
}

// changes
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    vector<int>arr(n);
    ll sum = 0;
    for (int i=0;i<n;i++){
        cin>>arr[i];
        if (i%2 == 0){
            sum+=arr[i];
        }
    }

    vector<ll>b1 ,b2;
    for (int i = 0;i+1<n;i+=2){
        b1.push_back(arr[i+1] - arr[i]);
    }
    for (int i = 1;i+1<n;i+=2){
        b1.push_back(arr[i] - arr[i+1]);
    }
    cout << sum+max({0ll, mss(b1), mss(b2)}) << endl;
    }
    return 0;
}