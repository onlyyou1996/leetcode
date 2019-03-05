#include<vector>
#include<string>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
		int l = numbers.size();
		int i = 0, j = 0;
		vector<int> result(2);
		for (i = 0; i < l; i++) {
			for (j = i + 1; j < l; j++) {
				if (numbers[i] + numbers[j] == target) {
					result[0] = i + 1;
					result[1] = j + 1;
					break;
				}
			}
		}
		return result;
	}
};

int main()
{
	Solution s1;
	vector<int> ilist = { 2,7,11,15 };
	s1.twoSum(ilist,9);
	return 0;
}