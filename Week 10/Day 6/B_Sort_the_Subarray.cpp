#include <bits/stdc++.h>
#define ll long long 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a){
        cin >> i;
    }
    for (auto &i : b){
        cin >> i;
    }
    int l = 0, r = n - 1;
 
    while (a[l] == b[l]){
        l++;
    }
    while (a[r] == b[r]){
        r--;
    }
    while (l > 0 && b[l] >= b[l - 1]){
        l--;
    }
    while (r < n - 1 && b[r] <= b[r + 1]){
        r++;
    }
 
    cout << l + 1 << " " << r + 1 << endl;
    }

    return 0;  // Added the return statement
}
