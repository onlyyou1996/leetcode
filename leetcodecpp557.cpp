#include<string>
#include<vector>
using namespace std;
class Solution {
public:
	string reverseWords(string s) {
		int l = s.size();
		int i = 0, j = 0,temp=-1,tmp;
		for (i = 0; i < l; i++) {
			if (s[i] == ' ') {
				for (j = temp + 1; j < temp + (i - temp + 1) / 2; j++) {
					tmp = s[j] - s[i + temp - j];
					s[j] = s[j] - tmp;
					s[i + temp - j] = s[i + temp - j] + tmp;
				}
				temp = i;
			}
			if (i == l - 1) {
				for (j = temp + 1; j < temp + (i - temp + 1) / 2 + 1; j++) {
					tmp = s[j] - s[i + temp - j + 1];
					s[j] = s[j] - tmp;
					s[i + temp - j + 1] = s[i + temp - j + 1] + tmp;
				}
			}
		}
		return s;
	}
};

int main()
{
	Solution s1;
	s1.reverseWords("Let's take LeetCode contest");
	return 0;
}

