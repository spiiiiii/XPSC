#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;cin>>t;
    while (t--)
    {
        /* code */
    
    
    int n;
    cin >> n;

    vector<int> visited(n + 1);
    vector<int> sequence;

    for (int i = 1; i <= n; i++) {
        if (visited[i])
            continue;
        
        int current = i;
        while (current <= n) {
            if (visited[current]) {
                break;
            }
            visited[current] = 1;
            sequence.push_back(current);
            current *= 2;
        }
    }

    for (int num : sequence) {
        cout << num << " ";
    }
    cout << "\n";
    }

    return 0;
}
