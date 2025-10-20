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
    string s;
    cin>>s;
    int windowsize=1;
    int count=1;
    char l=s[0];

    for(int i=1; i<s.size(); i++){
        if(s[i]==l){
            count++;
            windowsize=max(windowsize,count);
        }
        else{
            l=s[i];
            count=1;
        }
        
    }
    cout<<windowsize;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}