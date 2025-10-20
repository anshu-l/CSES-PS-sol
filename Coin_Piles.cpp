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
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b;
//         cin>>a>>b;

//         if((a+b)%3==0){
//             if(a<=2*b+1 && b<=2*a+1){
//                 cout<<"YES"<<endl;
//             }
//             else
//             {
//                 cout<<"NO"<<endl;
//             }
            
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     solve();
//     return 0;
// }


// i wrote the uper wala code and it worked but below is the much more tightend condtion
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;

        if ((a + b) % 3 == 0) {
            if (max(a, b) <= 2 * min(a, b)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
