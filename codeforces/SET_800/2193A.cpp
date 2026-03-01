/*
- new_sum = arr_sum + k*x
acc to the ques, target = num_sum
logic:
- target - arr_sum = k*x
so eqs becomes,
- (target - arr_sum) % x == 0;
if true then "Yes";
else "No";
*/

#include <iostream>
#include <vector>

std::string appeable(int s, int x, const std::vector<int> &a);

int main() {
    int tc_no;
    std::vector<std::string> result;

    std::cin >> tc_no;

    for (int i = 0; i < tc_no; i++) {
        int n, s, x;
        std::cin >> n >> s >> x;
        std::vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }

        result.push_back(appeable(s, x, a));
    }

    for (auto& elm : result) {
        std::cout << elm << std::endl;
    }
}

std::string appeable(int s, int x, const std::vector<int> &a) {
    int sum{0};
    
    for (int elm : a) {
        sum += elm;
    }
    
    if (s >= sum  && (s - sum) % x == 0) {
        return "Yes";
    } else {
        return "No";
    }
}