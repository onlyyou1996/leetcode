#include<string>
#include<stack>
using namespace std;
class Solution {
public:
	bool isValid(string s) {
		int l = s.size();
		stack<char> stack1;
		int i = 0;
		for (i = 0; i < l; i++) {
			if (s[i] == '(' | s[i] == '[' | s[i] == '{') stack1.push(s[i]);
			else {
				if (stack1.empty()) return false;
				if (s[i] == ')' && stack1.top() != '(') return false;
				if (s[i] == ']' && stack1.top() != '[') return false;
				if (s[i] == '}' && stack1.top() != '{') return false;
				stack1.pop();
			}
		}
		if (stack1.empty())  return true;
		else    return false;
	}
};

int main()
{
	Solution Solution1;
	Solution1.isValid("()[]{}");
	return 0;
}