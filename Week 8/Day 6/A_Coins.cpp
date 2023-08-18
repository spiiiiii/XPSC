#include <bits/stdc++.h>
#define ll long long 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       long long int n, k;
        cin >> n >> k;
        if (n % 2 && k % 2 == 0) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    return 0;
}