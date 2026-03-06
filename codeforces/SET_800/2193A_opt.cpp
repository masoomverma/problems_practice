#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    std::vector<std::string> result;

    while (t--) {
        int n, s, x;
        std::cin >> n >> s >> x;

        int sum = 0;
        for (int i = 0; i < n; i++) {
            int val;
            std::cin >> val;
            sum += val;
        }

        if (s >= sum && (s - sum) % x == 0)
            result.push_back("Yes");
        else
            result.push_back("No");
    }

    for (auto &elm : result) {
        std::cout << elm << std::endl;
    }
}
