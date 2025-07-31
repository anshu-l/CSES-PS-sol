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

void solve() {
    int n;
    cin>>n;
    // vi arr(n);
    // for(int i =0; i<n; i++){
    //     cin>>arr[i];
    // }
    int num=5;
    int p=0;

    while(n/num >0){
        p+=n/num;
        n=n/num;
    }
    cout<<p;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}