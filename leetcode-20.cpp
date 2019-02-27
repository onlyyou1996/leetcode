#include<string>
#include<stack>
using namespace std;
class Solution {
public:
	bool isValid(string s) {
		int l = s.size();		//获取长度
		stack<char> stack1;		//定义栈
		int i = 0;
		for (i = 0; i < l; i++) {
			if (s[i] == '(' | s[i] == '[' | s[i] == '{') stack1.push(s[i]);		//将括号左半边压入栈
			else {																//判断右边括号是否和左半边相对应
				if (stack1.empty()) return false;
				if (s[i] == ')' && stack1.top() != '(') return false;
				if (s[i] == ']' && stack1.top() != '[') return false;
				if (s[i] == '}' && stack1.top() != '{') return false;
				stack1.pop();
			}
		}
		if (stack1.empty())  return true;										//判断是否所有对应
		else    return false;
	}
};

int main()
{
	Solution Solution1;
	Solution1.isValid("()[]{}");
	return 0;
}