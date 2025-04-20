// starting with the name of almighty ALLAH
// Practice is the only shortcut to improve
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define mp(x,y) make_pair(x,y)
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define tst int t;cin>>t;while(t--)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define rj ios::sync_with_stdio(false);cin.tie(0);
#define rvs(v) reverse(v.begin(),v.end());
#define F first
#define S second
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pii pair<int,int>
#define fr(i,a,b) for(int i=a;i<=b;i++)
#define coutv(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define cinv(v) for(auto &it:v)cin>>it;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ld long double
#define nl '\n'
const int N = 1e5;
using namespace std;
/* #ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define dbg(x...)
#endif */
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r)
{
   return uniform_int_distribution<int>(l, r) (rng);
}
string sm = "LIT";
char gt(char x, char y)
{
   for (auto &it : sm)
   {
      if (it != x and it != y)
         return it;
   }
}
void solve()
{
   int a;
   cin >> a;
   string s;
   cin >> s;
   map<char, int>m;
   for (auto &it : s)
   {
      m[it]++;
   }
   int br = -1;
   for (int i = 1; i < a; i++)
   {
      if (s[i] != s[i - 1])
      {
         br = i + 1;
         break;
      }
   }
   int mx = max({m[sm[0]], m[sm[1]], m[sm[2]]});
   vector<int>ans;
   while (m['L'] != mx or m['I'] != mx or m['T'] != mx)
   {
      while (s.size() > 1 and s[s.size() - 1] == s[s.size() - 2])
         s.pop_back();
      if (s.size() == 1)
         break;
      int sz = (int)s.size();
      int c = gt(s[sz - 1], s[sz - 2]);
      if (m[c] < mx)
      {
         m[c]++;
         char bc = s.back();
         ans.push_back(sz - 1);
         s.pop_back();
         s.push_back(c);
         s.push_back(bc);
      }
      else
      {
         //s.pop_back();
         if (sz != br)
            s.pop_back();
         else
         {
            m[c]++;
            mx++;
            char bc = s.back();
            ans.push_back(sz - 1);
            s.pop_back();
            s.push_back(c);
            s.push_back(bc);
         }
      }
      if (ans.size() > 2 * a)
         break;
   }
   for (auto &it : sm)
   {
      if (m[it] != mx)
      {
         cout << -1 << nl;
         return;
      }
   }
   if (ans.size() > 2 * a)
   {
      cout << -1 << nl;
      return;
   }
   cout << (int)ans.size() << nl;
   for (auto &it : ans)
   {
      cout << it << nl;
   }
}
int main()
{
   /*#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif // ONLINE_JUDGE*/
   rj
   tst
   //int t;cin>>t;fr(i,1,t) cout<<"Case "<<i<<": ",solve();
   //ll t;scanf("%lld",&t);fr(i,1,t) printf("Case %lld: ",i),solve();
   solve();
   return 0;
}