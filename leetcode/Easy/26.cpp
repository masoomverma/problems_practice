/* using two pointers and array 
with count pre(previous) and cur(current) */

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		int pre = 0;
		int cur = 1;
		while(cur < nums.size()) {
			if(nums[cur] != nums[pre]){
				pre++;
				nums[pre] = nums[cur];
			}
			cur++;
		}
		return pre + 1;
	}
};