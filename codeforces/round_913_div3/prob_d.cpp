#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const ll MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
vector<pair<ll,ll>> vec(2e5+5);

bool isposs(ll n, ll k) {
    ll l=0, r=0;

    for (ll i=0; i<n; ++i) {
        if (r < vec[i].first) {
            if (r+k >= vec[i].first) {
                l = vec[i].first;
                if (r+k <= vec[i].second)
                    r+=k;
                else r = vec[i].second;
            } else return false;
        } else if (l > vec[i].second) {
            if (l-k <= vec[i].second) {
                r = vec[i].second;
                if (l-k >= vec[i].first) l-=k;
                else l = vec[i].first;
            } else return false;
        }
        else {
            if (l-k < vec[i].first)
                l = vec[i].first;
            else l -= k;

            if (r+k > vec[i].second)
                r = vec[i].second;
            else r += k;
        }
    }

    return true;
}

void solve() {
    ll n; cin >> n;
    for (ll i=0; i<n; ++i) cin >> vec[i].first >> vec[i].second;

    ll l=0, r=1e9;
    while(l<r) {
        ll mid = l+r >> 1;
        if (isposs(n,mid))
            r = mid;
        else l = mid + 1;
    }

    cout << l << '\n';
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}