#include<vector>
#include<iostream>
using namespace std;
//此方法超时在此基础上进行优化
/*
class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {
		int result = 1, i = 0, j = 0;
		int l = nums.size();
		vector<int> list(l, 0);
		for (i = 0; i < l; i++) {
			for (j = 0; j < l; j++) {
				if (j != i) {
					result = nums[j] * result;
				}
			}
			list[i] = result;
			result = 1;
		}
		return list;
	}
};
*/
class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {
		int n = nums.size();
		vector<int> fwd(n, 1), bwd(n, 1), res(n);
		for (int i = 0; i < n - 1; ++i) {
			fwd[i + 1] = fwd[i] * nums[i];
		}
		for (int i = n - 1; i > 0; --i) {
			bwd[i - 1] = bwd[i] * nums[i];
		}
		for (int i = 0; i < n; ++i) {
			res[i] = fwd[i] * bwd[i];
		}
		return res;
	}
};

int main()
{
	vector<int> ilist = { 1,2,3,4 };
	Solution solution1;
	solution1.productExceptSelf(ilist);
	return 0;
}