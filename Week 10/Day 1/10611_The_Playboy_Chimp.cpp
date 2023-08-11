#include <bits/stdc++.h>
using namespace std;

int main() {
       
        int n;cin>>n;
        vector<int>a(n);
        for(int i =  0 ; i < n ;i++){
            cin>>a[i];
        }
         int b;cin>>b;
        while (b--)
        {
            int x;cin>>x;
            auto it = lower_bound(a.begin(), a.end(), x);
            int idx = it - a.begin();
            auto it1 = upper_bound(a.begin(), a.end(), x);
            int idx1 = it1 - a.begin();
             if (idx == 0)
            cout << "X ";
            else
            cout << a[idx - 1] << " ";

           if (idx1 == n)
            cout << "X" << endl;
            else
            cout << a[idx1] << endl;
        }
        return 0;
        
       }

