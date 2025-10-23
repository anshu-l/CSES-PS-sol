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
//     string n ;
//     cin>>n;

//     // hashmap 2 case to allow -> if all feq %2==0 other is if any one of the freq is odd

//     vi arr(26);
//     for(auto it: n){
//         arr[it-'A']++; 
//     }   
//     // we have to built the string also like batana padega ohhcha
//     // xor wali approach aayi achanak se but we have to build the entire string so woh toh hard rahega 

//     int odd=0;
//     int even=0;
//     for(int i =0; i<26; i++){
//         if(arr[i]%2==0) even++;
//         else{
//             // odd++;
//             odd = i;
//         }

//     }

//     if(odd>1){
//         cout<<"NO SOLUTION"<<endl;
//     }
    
//     // built the string 
//     // aaa         -              aaa
// //make this     add this
//             //  if odd exist       just rev and insert the first part 



    

    
//     string left="";
//     for(int i=0; i<26; i++){
//         int half = arr[i] / 2;// aadhe hi use ho aage 

//             // for (int j = 0; j < half; j++) {
//             //     left += (char)('A' + i);
//             // }
//             for(int j=0; j<half; j++){
//                 left+=('A'+i);
//             }
//     }
//     string middle="";
//     if(odd==1){
//         middle+=('A'+odd);
//     }

//     string right = left;
//     reverse(right.begin(), right.end());
    
//     cout<<left+middle+right;


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
    string s;            // rename from 'n' → it's a string
    cin >> s;

    // count frequency
    vi arr(26);
    for (char ch : s) {
        arr[ch - 'A']++;
    }

    // --- FIX: track both oddCount and oddIndex ---
    int oddCount = 0;
    int oddIndex = -1;
    for (int i = 0; i < 26; i++) {
        if (arr[i] % 2 != 0) {
            oddCount++;
            oddIndex = i; // remember which char is odd (last one)
        }
    }

    // --- FIX: check oddCount, not oddIndex ---
    if (oddCount > 1) {
        cout << "NO SOLUTION" << endl;
        return; // --- FIX: must return after printing NO SOLUTION ---
    }

    // build left half
    string left;
    left.reserve(s.size() / 2); // optional: avoids reallocations for big n
    for (int i = 0; i < 26; i++) {
        int half = arr[i] / 2;
        for (int j = 0; j < half; j++) {
            left += char('A' + i);
        }
    }

    // middle (only if exactly one odd)
    string middle;
    if (oddCount == 1) {              // --- FIX: check oddCount, not oddIndex value ---
        middle += char('A' + oddIndex); // one char in the middle
        // (we don't need to append more because only one leftover after halves)
    }

    // right is reverse of left
    string right = left;
    reverse(right.begin(), right.end());

    cout << left << middle << right << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
