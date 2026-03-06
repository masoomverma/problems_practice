// by hashmap using the unordered_map<key_type, value_type>

class Solution {
	public:
		vector<int> twoSum(vector<int>& nums, int target) {
			unordered_map<int, int> idxpair;
			
			for(int i = 0; i < nums.size(); i++) {
				int need = target - nums[i];
				
				if(idxpair.find(need) != idxpair.end()) {
					return {idxpair[need], i};
				}
				
				idxpair[need] = i;
			}
			
			return {};
		}
};