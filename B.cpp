#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    string t;
    cin>>t;
    int a =0 ,b = 0;
    for (auto c : t){
        if (c == '0'){
            a++;
        }
        else{
            b++;
        }
        
    }
    int x = min(a,b);
    cout<< (x%2?"DA":"NET")<<endl;
}
int main(){
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}