#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
       string s;
      cin >> s;
      int n = (int) s.size();
      int j = n;
      for (int i = n - 1; i > 0; i--) {
        if (s[i] >= '5') {
          s[i - 1]++;
          j = i;
        }
      }
      for (int g = j; g < n; g++)s[g] = '0';
      if (s[0] >= '5') {
        cout << "10";
        for (int i = 1; i < n; i++)cout << '0';
        cout << endl;
      } 
      else {
        cout << s << endl;
      }
       
    }

    return 0;
}
