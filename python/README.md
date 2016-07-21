##################################################################
buy_sell_stock.py

Say you have an array for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), this program will find the maximum profit.

Example 1:
Input: [7, 1, 5, 3, 6, 4]
Output: 5
* max. difference = 6-1 = 5 (not 7-1 = 6, as selling price needs to be larger than buying price)


Example 2:
Input: [7, 6, 4, 3, 1]
Output: 0
* In this case, no transaction is done, i.e. max profit = 0.

Runtime complexity: O(n)
(Additional) Space: O(1)

##################################################################
populating_next_right_pointers_per_node.py

Given a binary tree

    struct TreeLinkNode {
      TreeLinkNode *left;
      TreeLinkNode *right;
      TreeLinkNode *next;
    }
Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL.

Initially, all next pointers are set to NULL.

Note:

You may only use constant extra space.
You may assume that it is a perfect binary tree (ie, all leaves are at the same level, and every parent has two children).
For example,
Given the following perfect binary tree,
         1
       /  \
      2    3
     / \  / \
    4  5  6  7
After calling your function, the tree should look like:
         1 -> NULL
       /  \
      2 -> 3 -> NULL
     / \  / \
    4->5->6->7 -> NULL


Runtime complexity: O(n)
(Additional) Space: O(1)

##################################################################
missing_number.py

Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

For example,
Given nums = [0, 1, 3] return 2.

Runtime complexity: O(n)
(Additional) Space: O(1)
