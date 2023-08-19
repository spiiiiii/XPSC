#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef long long int ll;
typedef long double LD;
#define w(t)     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
using namespace std;
 
void solve()
{
    ll n, mn2 = LONG_LONG_MAX, mn1 = LONG_LONG_MAX; cin >> n;
    vector<vector<ll>> v(n);
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            ll x; cin >> x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < n; i++) sort(v[i].begin(), v[i].end());
    for (int i = 0; i < n; i++)
    {
        mn2 = min(v[i][1], mn2);
        mn1 = min(v[i][0], mn1);
    }
    ll ans = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[i][1] == mn2 and count == 0) count++;
        else {ans += v[i][1];} 
    }
    ans += mn1;
    cout << ans << endl;
}
 
int main()
{
    IO;
    // solve();
    w(t);
    return 0;
}