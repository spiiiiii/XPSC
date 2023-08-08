#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.size()+1;

        // Start from the end and move towards the beginning
        for (int i = n - 1; i >= 0; i--) {
            // if( s[i]<'5'){
            //     s[i]='0';
            // }
            if (s[i] >= '5') {
                s[i] = '0'; // Change current digit to '0'
                
                
                // Carry over to previous digits
                int j = i - 1;
                while (j >= 0 && s[j] == '9') {
                    s[j] = '1'; 
                   // s[j+1]='1';// Change '9' to '0'
                    j--;
                }
                
                // If the previous digit is not '9', increment it
                if (j >= 0) {
                    s[j] = s[j] + 1;
                } else {
                    s.insert(s.begin(), '1'); // If all digits are '9', add '1' at the beginning
                }
            }
        }

        cout << s << endl;
    }

    return 0;
}
