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
		
		int pos = find(temp.begin(), temp.end(), n) - temp.begin();
		
		if (pos != 0) 
			reverse(temp.begin(), temp.begin() + pos + 1);
		else {
			int pos2 = find(temp.begin(), temp.end(), n - 1) - temp.begin();
			reverse(temp.begin() + 1, temp.begin() + pos2 + 1);
		}
		result.push_back(temp);
	}
	
	for (int i = 0; i < result.size(); i++) {
		for (int &elm : result[i]) {
			std::cout << elm << " ";
		}
		std::cout << "\n";
	}
}