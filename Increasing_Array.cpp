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
    int n;
    cin>>n;
    int c=0;
    vl arr(n);
    for(int i =0; i<n; i++) cin>>arr[i];
    ll moves=0;
    for(int i =1; i<n; i++){
        if(arr[i]>=arr[i-1]){
            continue;
        }
        int diff=abs(arr[i]-arr[i-1]);
        moves+=diff;
        arr[i]+=diff;
    }
    cout<<moves<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}