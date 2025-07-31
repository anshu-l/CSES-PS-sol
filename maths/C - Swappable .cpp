#include <bits/stdc++.h>
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;


#define ll long long
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define vl vector<long long>
#define vs vector<string>
#define pii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define PI 3.141592653589793238
#define INF 2e18
#define endl "\n"



ll nc2(ll n){
   return 1LL * n * (n - 1) / 2;
}

void solve() {
    ll n;
    cin>>n; 
    vl arr(n);
    for(ll i =0; i<n; i++){
        cin>>arr[i];
    }
    
    unordered_map<ll,ll>mp;
    for(ll i =0; i<n; i++){
        mp[arr[i]]++;
    }
    // total =valid +invalid 
    ll total=nc2(n);
    ll invalid=0;
    for(auto it : mp){
        if(it.second>1){
            invalid += nc2(it.second);
        }
    }

    cout<<total-invalid;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}