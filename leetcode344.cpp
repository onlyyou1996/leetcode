#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
	void reverseString(vector<char>& s) {
		int l = s.size();
		int i = 0, temp = 0;
		for(i=0;i<l/2;i++){
			temp = s[i] - s[l - i - 1];
			s[i] = s[i] - temp;
			s[l - i - 1] = s[l - i - 1] + temp;
		}
	}
};

int main()
{
	vector<char> ilist = {'h','e','l','l','o' };
	Solution solution1;
	solution1.reverseString(ilist);
	return 0;
}