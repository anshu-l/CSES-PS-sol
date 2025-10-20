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
    int t;
    cin>>t;

    if(t>3){

    // saperate odd and even 
    for (int i = 2; i <= t; i += 2) cout << i << " "; // badia trick h khud se toh nahi ho pati 
    // Then odd numbers
    for (int i = 1; i <= t; i += 2) cout << i << " ";
    }

    else if(t==1){
    for (int i = 2; i <= t; i += 2) cout << i << " "; // badia trick h khud se toh nahi ho pati 
    // Then odd numbers
    for (int i = 1; i <= t; i += 2) cout << i << " ";
    }
    
    
    else{
        cout<<"NO SOLUTION";
    }

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}