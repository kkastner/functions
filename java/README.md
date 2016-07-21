##################################################################
implement_strStr.java

Implement strStr().

Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

n is length of string "haystack" and m is length of string "needle"
Runtime complexity: O(m*n) if n >> m, otherwise O(m*n - m^2)
(Additional) Space: O(1)

##################################################################
substring_with_concatenation_of_all_words.java

You are given a string, s, and a list of words, words, that are all of the same length. Find all starting indices of substring(s) in s that is a concatenation of each word in words exactly once and without any intervening characters.

For example, given:
s: "barfoothefoobarman"
words: ["foo", "bar"]

You should return the indices: [0,9].
(order does not matter).

n is length of string "s" and m is length of list of words "words"
Runtime complexity: O(n^2 - n*m)
(Additional) Space: O(m)

##################################################################
reverse_vowels.java

Write a function that takes a string as input and reverse only the vowels of a string.

Example 1:
Given s = "hello", return "holle".

Example 2:
Given s = "leetcode", return "leotcede".

Note:
The vowels does not include the letter "y".

Runtime complexity: O(n)
(Additional) Space: O(1)

