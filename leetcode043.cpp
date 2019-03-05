#include<string>
#include<vector>
using namespace std;
/*
class Solution {
public:
	string multiply(string num1, string num2) {
		int l1 = num1.size();
		int l2 = num2.size();
		int i = 0;
		int n1 = 0, n2 = 0, temp = 0;
		for (i = 0; i < l1; i++) {
			temp = num1[i] - 48;
			n1 = n1 * 10 + temp;
		}
		for (i = 0; i < l2; i++) {
			temp = num2[i] - 48;
			n2 = n2 * 10 + temp;
		}
		int result = n1 * n2;
		string j = std::to_string(result);
		return j;
	}
};
*/
/*
class Solution {
public:
	string multiply(string num1, string num2) {
		int l1 = num1.size();
		int l2 = num2.size();
		int i, j, temp, cnt, k;
		vector<int> mylist1(l1);
		vector<int> mylist2(l2);
		vector<int> mylist3((l1 + 1)*l2);
		vector<int> mylist4(l1 + l2);
		cnt = ((l1 + 1)*l2)-1;
		k = 0;
		for (i = 0; i < l1; i++) {
			mylist1[i] = num1[i] - 48;
		}
		for (i = 0; i < l2; i++) {
			mylist2[i] = num2[i] - 48;
		}  
		for (i = l2 - 1; i >= 0; i--) {
			for (j = l1 - 1; j >= 0; j--) {
				temp = mylist2[i] * mylist1[j];
				if (temp > 10) {
					mylist3[cnt] = temp % 10 + k;
					k = temp / 10;
					cnt--;
				}
				else {
					mylist3[cnt] = temp + k;
					k = 0;
					cnt--;
				}
				if (j == 0) {
					mylist3[cnt] = k;
					if (cnt != 0)		cnt--;
				}
			}
		}
		cnt = l1 + l2 - 1;
		k = 0;
		for (i = cnt; i >= 0; i--) {
			for (j = 0; j < l1 + l2 - i; j++) {
				if (i >=  cnt - l1) {
					temp = temp + mylist3[((l1 + 1)*l2) - 1 - j * (l1 - 1)];
				}
				else {
					if ((j >= -(i - cnt + l1 + 1))&&(j<l2)) {
						temp = temp + mylist3[((l1 + 1)*l2) - 1 - j * (l1 - 1)];
					}
				}
				if(i!=0){
					if (temp >= 10) {
						mylist4[i] = (temp + k) % 10;
						k = (temp + k) / 10;
					}
					else if(temp >= 100) {
						mylist4[i] = (temp + k) % 100;
						k = (temp + k) / 10;
					}
					else{
						mylist4[i] = temp + k;
					}
				}
			}
			temp = 0;
		}
		return num1;
	}
};
*/

class Solution {
public:
	string multiply(string num1, string num2) {
		string result;
		int n1 = num1.size(), n2 = num2.size();
		int k = n1 + n2 - 2, temp = 0;
		vector<int> v(n1 + n2, 0);
		for (int i = 0; i < n1; ++i) {
			for (int j = 0; j < n2; ++j) {
				v[k - i - j] += (num1[i] - '0') * (num2[j] - '0');
			}
		}
		for (int i = 0; i < n1 + n2; ++i) {
			v[i] += temp;
			temp = v[i] / 10;
			v[i] %= 10;
		}
		int i = n1 + n2 - 1;
		while (v[i] == 0){
			if(i>0){ i--; }
			else break;
		}
		if (i < 0) return "0";
		while (i >= 0) result.push_back(v[i--] + '0');
		return result;
	}
};

int main()
{
	Solution s1;
	s1.multiply("0", "0");
	return 0;
}

