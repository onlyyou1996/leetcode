# leetcode
## LeetCode020:有效的括号      
https://leetcode-cn.com/problems/valid-parentheses/ <br>
解题思路：观察要求以及数据本身的特点。
此题采用栈进行解决，由于括号是配对的问题且有先后顺序，采用栈进行解决效果最好。

## LeetCode026: 删除排序数组中的重复项      
https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/ <br>
解题思路：删除重复项。从后开始遍历。记住最后一项然后对比前项和后项数据，相同删除，不同重新记录。
C++容器可以自行改变大小并进行缩进，较为容易实现。


## LeetCode011 : 盛最多水的容器        
https://leetcode-cn.com/problems/container-with-most-water/ <br>
解题思路：遍历所有可能。这是最易实现，效率不高，后续其他方法让我在想想。

## LeetCode043:字符串相乘           
https://leetcode-cn.com/problems/multiply-strings/ <br>
解题思路：本来想采用转化为int数据类型进行计算，结果有可能超出范围；采用容器 书写乘法计算原理进行书写。

## LeetCode344: 反转字符串          
https://leetcode-cn.com/problems/reverse-string/ <br>
解题思路：利用ASCII码中数值差进行解题，设立temp进行解决。

## LeetCode557 : 反转字符串中的单词 III      
https://leetcode-cn.com/problems/reverse-words-in-a-string-iii/ <br>
解题思路：与上题相似，但是将本题分解为多个单词进行分别计算。

## LeetCode238: 除自身以外数组的乘积                 
https://leetcode-cn.com/problems/product-of-array-except-self/ <br>
解题思路：遍历数组，将每个数之前的数和之后的数相乘，暴力计算会出现超时
