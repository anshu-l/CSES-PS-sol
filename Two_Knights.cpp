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
    int n ;
    cin>>n;
    for(ll k=1; k<=n; k++){
        ll totalattacksposs=k*k*(k*k-1)/2;
        ll knightattack=4*(k-2)*(k-1);
        cout<<totalattacksposs-knightattack<<endl;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}