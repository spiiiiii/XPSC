
#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, x, ans = 0;
        std::cin >> n;

        for (int i = 0; i < n; i++) {
            std::cin >> x;
            ans |= x;
        }

        std::cout << ans << '\n';
    }

    return 0;
}
