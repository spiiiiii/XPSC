#include <iostream>
#include <vector>
#include <algorithm> // for std::sort
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<int> a(n);
         vector<int> ans;
          vector<pair<int, int>> c;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] %m== 0){
                 ans.push_back(i + 1);
            }
            // Perform the operation on array elements
            else{
                 c.push_back({a[i]%m,i+1});
            }
        }
 
       
 
        // Sort the element-index pairs in ascending order of elements
       
       
       // sort(c.begin(), c.end());
         sort(c.begin(), c.end(), [&]( pair<int, int> p1,  pair<int, int> p2) 
         {
             if(p1.first==p2.first){
            return p1.second < p2.second;
             }
             return p1.first>p2.first;
        });
        
 
        
 
        // Display the indices in the 'ans' vector
        for (auto k : c) {
            ans.push_back(k.second);
        }
         for (int i = 0; i < n; i++) {
            cout<< ans[i]<<" ";}
        cout << endl;
    }
 
    return 0;
}