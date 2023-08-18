#include <bits/stdc++.h>
#define ll long long 
using namespace std;

const int MAXN = 100005;  // Define a suitable maximum value for array sizes

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        
        int mx = *max_element(a, a + n);
        int b[MAXN] = {0};  // Initialize array b with 0
        
        for (int i = 0; i < n; i++) {
            b[a[i]]++;  // Count frequency of each element
        }

        int mxx = *max_element(b, b + mx + 1);  // Find the maximum frequency
        cout << mxx << endl;
    }
    return 0;
}
