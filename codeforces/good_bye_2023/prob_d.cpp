#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;


// Ordered set - increasing order
template<typename T>
using ordered_set = __gnu_pbds::tree<T, __gnu_pbds::null_type, less<T>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
// .find_by_order( k ) -> iterator 0-based of k-th largest element (0 = smallest)
// .order_of_key( k ) -> how many items in the set are < k

// Ordered set - reversed
template<typename T>
using ordered_set_gre = __gnu_pbds::tree<T, __gnu_pbds::null_type, greater<T>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
// .find_by_order( k ) -> iterator 0-based of k-th smallest element (0 = great)
// .order_of_key( k ) -> how many items in the set are > k

typedef __int128_t lll; typedef long long ll; typedef long double ld;
typedef pair<int,int> pii; typedef pair<ll,ll> pll;
typedef vector<int> vi; typedef vector<ll> vll; typedef vector<pii> vpii; typedef vector<pll> vpll;

#define pb push_back
#define f first
#define s second

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    int n; cin >> n;
    if (n == 1) cout << 1 << '\n';
    else if (n == 3) {
        cout << 169 << '\n' << 196 << '\n' << 961 << '\n';
    } else {
        int count = 0;
        string num[3]{"169", "961", "196"};
        for (auto & i : num) {
            for(int z=0; z<n/2; ++z){
                cout << i[0];
                for (int zeros=0; zeros<z; ++zeros) cout << 0;
                cout << i[1];
                for (int zeros=0; zeros<z; ++zeros) cout << 0;
                cout << i[2];
                for (int zeros=0; zeros<n-3-2*z; ++zeros) cout << 0;
                cout << '\n';
                ++count;
                if (count == n) return;
            }
        }
    }

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
