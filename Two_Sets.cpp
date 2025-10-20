// #include <bits/stdc++.h>
// using namespace std;
// //#include <ext/pb_ds/assoc_container.hpp>
// //#include <ext/pb_ds/tree_policy.hpp>
// //using namespace __gnu_pbds;


// #define ll long long
// #define pb push_back
// #define pp pop_back
// #define vii vector<pair<int,int>>
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define vl vector<long long>
// #define vs vector<string>
// #define pii pair<int, int>
// #define all(x) (x).begin(), (x).end()
// #define PI 3.141592653589793238
// #define INF 2e18
// #define endl "\n"

// void solve() {
//     // good qurestion backword simulatin is good ig 

//     int n;
//     cin>>n;
//     ll sum=n*(n+1)/2;
//     if(sum %2!=0) cout<<"NO"<<endl;
//     cout << "YES\n";
//     long long need = sum / 2;
//     vl a;
//     vl b;
//     for(ll x=n;x>=1; --x){
//         if(x<=need){
//             a.push_back(x);
//             need-=x;
//         }
//         else{
//             b.push_back(x);
//         }

//     }
//     cout << a.size() << "\n";
//     for (auto v : a) cout << v << " ";
//     cout << "\n" << b.size() << "\n";
//     for (auto v : b) cout << v << " ";
//     cout << "\n";
     
    
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     solve();
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

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
    cin >> n;

    ll sum = 1LL * n * (n + 1) / 2;      // ✅ prevent overflow

    if (sum % 2 != 0) {                  // ✅ early exit on odd sum
        cout << "NO" << endl;
        return;
    }

    cout << "YES\n";
    ll need = sum / 2;
    vl a, b;
    // (Optional) a.reserve(n/2), b.reserve(n/2);

    for (ll x = n; x >= 1; --x) {
        if (x <= need) {
            a.push_back(x);
            need -= x;
        } else {
            b.push_back(x);
        }
    }

    cout << a.size() << "\n";
    for (auto v : a) cout << v << " ";
    cout << "\n" << b.size() << "\n";
    for (auto v : b) cout << v << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
 