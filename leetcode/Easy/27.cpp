class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int pre = 0;
		int cur = 0;
		while(cur < nums.size()) {
			if(nums[cur] != val) {
				nums[pre] = nums[cur];
				pre++;
			}
			cur++;
		}
		return pre;
	}
}