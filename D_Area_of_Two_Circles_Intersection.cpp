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
    ll x1, y1, r1;
    ll x2, y2, r2;
    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;

    ll dx = x1 - x2;
    ll dy = y1 - y2;
    ll dist = dx * dx + dy * dy; 

    ll sum = r1 + r2;
    ll sumsq = sum * sum;

    ll diff = abs(r1 - r2);
    ll diffsq = diff * diff;

    cout << fixed << setprecision(20);

    // agar same sizw h toh
    if (x1 == x2 && y1 == y2 && r1 == r2) {
        cout << PI * r1 * r1 << endl;
    }
    // One circle is fully inside the other
    else if (dist <= diffsq) {
        cout << PI * min(r1, r2) * min(r1, r2) << endl;
    }
    //no intersection
    else if (dist > sumsq) {
        cout << 0.0 << endl;
    }
    //Circles touch externally
    else if (dist == sumsq) {
        cout << 0.0 << endl;
    }
    // Case 5: Circles touch internally
    else if (dist == diffsq) {
        cout << min(PI * r1 * r1, PI * r2 * r2) << endl;
    }
    // Case 6: Circles intersect at two points
    else {
        // 1sector +2nd sector - area of kite
    long double d = sqrtl(dist);
    long double r1d = r1, r2d = r2;

    long double angle1 = 2 * acosl((dist + r1d * r1d - r2d * r2d) / (2 * d * r1d));
    long double angle2 = 2 * acosl((dist + r2d * r2d - r1d * r1d) / (2 * d * r2d));

    long double area1 = 0.5 * r1d * r1d * (angle1 - sinl(angle1));
    long double area2 = 0.5 * r2d * r2d * (angle2 - sinl(angle2));

    cout << area1 + area2 << endl;


    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}