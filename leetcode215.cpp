#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
	int findKthLargest(vector<int>& nums, int k) {
		int l = nums.size();
		int i = 0, temp = 0, j = 0;
		for (i = 0; i < l; i++) {
			for (j = i; j < l; j++) {
				if (nums[j] >= nums[i]) {
					temp = nums[i];
					nums[i] = nums[j];
					nums[j] = temp;
				}
			}
		}
	return nums[k - 1];
	}
};

int main()
{
	vector<int> ilist = { 3,2,3,1,2,4,5,5,6 };
	Solution solution1;
	solution1.findKthLargest(ilist,4);
	return 0;
}