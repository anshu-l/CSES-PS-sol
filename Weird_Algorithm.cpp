#include <bits/stdc++.h>
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
#define ll long long
#define pb push_back
#define pp pop_back
#define vii vector<pair<int,int>>
#define vvi vector<vector<int>>
#define vi vector<int>
#define vl vector<long long>
#define vs vector<string>
#define pii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define PI 3.141592653589793238
#define INF 2e18
#define endl "\n"

void solve() {
    ll n;
    cin>>n;
    cout<<n;
    while(n>1){
        if(n%2==0){
            n=n/2;
        }
        else{
            n=3*n+1;
        }
        cout<<" "<<n;

    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}