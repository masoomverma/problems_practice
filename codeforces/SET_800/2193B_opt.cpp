#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int t;
	std::cin >> t;
	
	std::vector<std::vector<int>> result;
	
	while(t--) {
		int n;
		std::cin >> n;
		
		std::vector<int> temp(n);
		for (int i = 0; i < n; i++) {
			std::cin >> temp[i];
		}
		
		auto it = max_element(temp.begin(), temp.end());
		
		if(it != temp.begin())
			reverse(temp.begin(), it + 1);
		
		result.push_back(temp);
	}
	
	for (int i = 0; i < result.size(); i++) {
		for (int &elm : result[i]) {
			std::cout << elm << " ";
		}
		std::cout << "\n";
	}
}