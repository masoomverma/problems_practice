#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

std::string checkSQ(int a, int b, int c, int d);

int main() {
    int t;
    int a, b, c, d;

    std::vector<std::string> str_arr;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        std::cin >> a >> b >> c >> d;
        str_arr.push_back(checkSQ(a, b, c, d));
    }

    for (auto& elm : str_arr) {
        std::cout << elm << std::endl;
    }
}

std::string checkSQ(int a, int b, int c, int d) {
    if (a != b || b != c || c != d) {
        return "No";
    } else {
        return "Yes";
    }
}