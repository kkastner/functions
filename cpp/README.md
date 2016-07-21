------------------------------------------------------------------
rotate_array.cpp

Rotate an array of n elements to the right by k steps.
For example, with n = 7 and k = 3, the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4].

Runtime complexity: O(n)
(Additional) Space: O(1)

##################################################################
word_pattern.cpp

Given a pattern and a string str, find if str follows the same pattern.

Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in str.

Examples:
pattern = "abba", str = "dog cat cat dog" should return true.
pattern = "abba", str = "dog cat cat fish" should return false.
pattern = "aaaa", str = "dog cat cat dog" should return false.
pattern = "abba", str = "dog dog dog dog" should return false.
Notes:
Assumes that pattern contains only lowercase letters, and str contains lowercase letters separated by a single space.

Runtime complexity: O(n)
(Additional) Space: O(n)

##################################################################
buy_sell_stock_multi.cpp

Say you have an array for which the ith element is the price of a given stock on day i.

This is a function to find the maximum profit. It will complete as many single transactions as will maximize profit (ie, buy one and sell one share of the stock multiple times). However, it will not perform multiple transactions at the same time (ie, it must sell the stock before it can buy again).

Example 1:
Input: [7, 1, 5, 3, 6, 4]
Output: 7
* profits = 5-1 = 4, 6-3 = 3; thus 4+3 = 7


Example 2:
Input: [7, 6, 4, 3, 1]
Output: 0
* In this case, no transaction is done, i.e. max profit = 0.

Runtime complexity: O(n)
(Additional) Space: O(1)

##################################################################
buy_sell_stock_multi_cooldown.cpp

Say you have an array for which the ith element is the price of a given stock on day i.

This is a function to find the maximum profit. It will complete as many single transactions as will maximize profit (ie, buy one and sell one share of the stock multiple times) with the following restrictions:

It may not engage in multiple transactions at the same time (ie, it must sell the stock before buying again).
After selling the stock, it cannot buy stock on next day. (ie, cooldown of 1 day)

Example:

prices = [1, 2, 3, 0, 2]
maxProfit = 3
transactions = [buy, sell, cooldown, buy, sell]

Runtime complexity: O(n)
(Additional) Space: O(1)

##################################################################
product_of_array_except_self.cpp

Given an array of n integers where n > 1, nums, returns a vector output such that result[i] is equal to the product of all the elements of nums except nums[i].

Solved without division.

For example, given [1,2,3,4], return [24,12,8,6].

Runtime complexity: O(n)
(Additional) Space: O(1) not including the result vector

##################################################################
balanced_binary_tree.cpp

Given a binary tree, this script determines if it is height-balanced.

For this script, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.

Runtime complexity: O(n)
(Additional) Space: O(1)

##################################################################
binary_tree_paths.cpp

Given a binary tree, returns all root-to-leaf paths.

For example, given the following binary tree:

   1
 /   \
2     3
 \
  5

All root-to-leaf paths are:

["1->2->5", "1->3"]

Runtime complexity: O(n)
(Additional) Space: O(1) not including the result vector

##################################################################
stack_using_queue.cpp

Implements the following operations of a stack using a queue.

push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
empty() -- Return whether the stack is empty.
Notes:
Uses only standard operations of a queue -- which means only push to back, peek/pop from front, size, and is empty operations are used.

Runtime complexity: push: O(n); pop,top,empty: O(1)
(Additional) Space: O(1) not including the "stack" itself

##################################################################
queue_using_stack.cpp

Implements the following operations of a queue using stacks.

push(x) -- Push element x to the back of the queue.
pop() -- Removes the element from in front of a queue.
top() -- Get the front element.
empty() -- Return whether the queue is empty.
Notes:
Uses only standard operations of a stack -- which means only push to top, peek/pop from top, size, and is empty operations are used.

Runtime complexity: push,empty: O(1); pop,peek: amortized O(1)
(Additional) Space: O(1) not including the "queue" itself (all elements are divided between the two stacks)

###################################################################
binary_tree_preorder_iterative.cpp

Given a binary tree, returns the preorder traversal of its nodes' values.
This is done iteratively.

For example:
Given binary tree [1,null,2,3],
   1
    \
     2
    /
   3
returns [1,2,3].

Runtime complexity: O(n)
(Additional) Space: O(n)

###################################################################
count_numbers_unique_digits.cpp

Given a non-negative integer n, count all numbers with unique digits, x, where 0 = x < 10^n.

Example:
Given n = 2, return 91. (The answer should be the total numbers in the range of 0 = x < 100, excluding [11,22,33,44,55,66,77,88,99])

Runtime complexity: O(n)
(Additional) Space: O(n)

###################################################################
bulb_switcher.cpp

There are n bulbs that are initially off. You should turn on all the bulbs. Then, you turn off every second bulb. On the third round, you toggle every third bulb (turning on if it's off or turning off if it's on). For the ith round, you toggle every i bulb. For the nth round, you only toggle the last bulb. Find how many bulbs are on after n rounds.

Example:

Given n = 3. 

At first, the three bulbs are [off, off, off].
After first round, the three bulbs are [on, on, on].
After second round, the three bulbs are [on, off, on].
After third round, the three bulbs are [on, off, off]. 

So you should return 1, because there is only one bulb is on.

The function takes advantage of the fact that a bulb is only on when it is switched an odd number of times, or has an odd number of divisors, as an even number would turn the bulb back off. Perfect squares fit this category as the number that can be multiplied by itself is the odd divisor. Thus you only need to count the number of perfect squares between 1 and n. This can be achieved by simply taking the integer value of sqrt(n).

Runtime complexity: O(1)
(Additional) Space: O(1)