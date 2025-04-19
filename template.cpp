#include <bits/stdc++.h>
#include <unistd.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_bit.add
// #include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace std;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

#define ll long long
#define pb push_back
#define int ll
#define pii pair <int, int>
#define pll pair <long long, long long>
#define trip pair < int, pair < int, pair < int, int > > >
#define endl '\n'
#include <random>
#define PI (2.0 * acos(0.0))
#define testcase int TT; cin >> TT; for (int tc = 1; tc <= TT; tc++)

#define info pair < int, pii >
// typedef fraction T;
template <typename T> using ordered_set = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
struct custom_hash {
static uint64_t splitmix64(uint64_t x) {
    // http://x...content-available-to-author-only...i.it/splitmix64.c
    x += 0x9e3779b97f4a7c15;
    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
    x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
    return x ^ (x >> 31);
}

size_t operator()(uint64_t x) const {
    static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
    return splitmix64(x + FIXED_RANDOM);
}
};
int fx[10] = {1, -1, 0, 0, 1, -1, 1, -1};
int fy[10] = {0, 0, 1, -1, 1 , -1, -1, 1};
const long long M = 2e5 + 10, M2 = 1e6 + 20, oo = 1e9 + 7, mod = 998244353;
const long long MC = (1 << 20) + 5;
inline int ceil(int a, int b) {
return (a + b - 1) / b;
}
inline int abs (int a, int b) {
int d1 = a - b;
if (d1 < 0) d1 *= -1;
return d1;
}

long long bigmod (int n, int p, int md) {
if (p == 0) return 1;
long long ans= bigmod(n, p / 2, md);
ans = (ans * ans) % md;
if (p % 2 == 1) ans = (ans * n) % md;
return ans;
}
long long pinverse (int num, int md) {
return bigmod(num, md - 2, md);
}
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// reg-brack ncr(2n, n) / (n + 1);
// ceil is a bad function
// think about reverse process
// read statement carefully
// think about corner cases before implementing
// don't forget to comment/uncomment define endl in interactive/non-interactive problems
// check if you are returning from solve before resetting array values
// try not to use continue / return statement, try to use if else
// try to write custom functions if stl one deals with floating point values
// don't use unordered map without custom hash
// multiset is bad try to use map if possible
// don't forget to return a value from a non-void function
// This fire shall burn

void precomp() {
    
}

void solve() {

}
int32_t main () {
    // freopen("E:/newts/in.txt", "r", stdin);
    // freopen("E:/newts/out.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    precomp();
    // int T;
    // scanf("%d", &T);
    // while (T--) {
    testcase {
        // cout << "Case #" << tc << ": ";
        // cout << "Case " << tc << ": ";
       solve();
    }
return 0;
}
