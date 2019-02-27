#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.empty()) return 0;
		int l = nums.size();
		int i = 0;
		int temp = nums[l - 1];
		for (i = l - 2; i >= 0; i--) {
			if (nums[i] == temp) nums.erase(nums.begin() + i);
			else temp = nums[i];
		}
		return nums.size();
	}
};

int main()
{
	vector<int> ilist = {0,0,1,1,1,2,2,3,3,4};
	Solution solution1;
	solution1.removeDuplicates(ilist);
	cout<< solution1.removeDuplicates(ilist);
	return 0;
}