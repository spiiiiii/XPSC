#include<bits/stdc++.h>
using namespace std;
int n, q, l, r, i;
long long a[200010], t[200010], f;
main ()
{
  cin >> n >> q;
  for (i = 0; i < n; i++)
    cin >> a[i];
  sort (a, a + n);
  for (i = 0; i < q; i++)
    cin >> l >> r, t[l - 1]++, t[r]--;
  for (i = 1; i < n; i++)
    t[i] += t[i - 1];
  sort (t, t + n);
  for (i = 0; i < n; i++)
    f += a[i] * t[i];
  cout << f << endl;
}




