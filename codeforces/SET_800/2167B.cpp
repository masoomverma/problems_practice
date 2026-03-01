#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

std::string check_string(int, const std::string&, const std::string&);

int main() {
    int q, n;
    std::string s, t;
    std::cin >> q;
    std::vector<std::string> str_arr;

    for (int i = 0; i < q; ++i)
    {
        std::cin >> n;
        std::cin >> s >> t;
        str_arr.push_back(check_string(n, s, t));        
    }

    for(std::string &elm : str_arr) {
        std::cout << elm << std::endl;
    }

    return 0;
}

std::string check_string(int n, const std::string& s, const std::string& t) {
    int freq[26] = {0};
    for (int i = 0; i < n; ++i) {
        freq[s[i] - 'a']++;
    }

    for (int j = 0; j < n; ++j) {
        freq[t[j] - 'a']--;
    }

    for (auto &result : freq) {
        if(result != 0)
            return "No";
    }
    
    return "Yes";
}