#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (is_sorted(a, a + n)) { // Check if the array is already sorted
            cout << 0 << endl;
            continue;
        }

        int d = 0;
        for (int i = n - 1; i > 0; i--) { // Change i++ to i-- to iterate in reverse
            if (a[i] < a[i - 1]) {
                d = i;
                break;
            }
        }

        int mx = *max_element(a, a + d);
        cout << mx << endl;
    }

    return 0;
}
