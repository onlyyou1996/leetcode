#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
	int maxArea(vector<int>& height) {
		int l = height.size();
		int i = 0, j = 0, max = 0, temp = 0, high = 0, weight = 0;
		for (i = 0; i < l - 1; i++) {
			for (j = i + 1; j < l; j++) {
				if (height[i] > height[j])     high = height[j];
				else        high = height[i];
				weight = j - i;
				temp = high * weight;
				if (temp > max)    max = temp;
			}
		}
		return max;
	}
};

int main()
{
	vector<int> ilist = { 1,8,6,2,5,4,8,3,7 };
	Solution solution1;
	solution1.maxArea(ilist);
	cout<< solution1.maxArea(ilist);
	return 0;
}