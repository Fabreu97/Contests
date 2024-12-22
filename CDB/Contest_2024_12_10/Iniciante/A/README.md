# Problem A: Chemistry

[Link](https://codeforces.com/problemset/problem/1883/B)

## Problem Statement

You are given a string `s` of length `n`, consisting of lowercase Latin letters, and an integer `k`. You need to determine if it is possible to remove exactly `k` characters from the string `s` such that the remaining characters can be rearranged to form a palindrome.

A palindrome is a string that reads the same forwards and backwards. For example, `"z"`, `"aaa"`, `"aba"`, and `"abccba"` are palindromes, while `"codeforces"`, `"reality"`, and `"ab"` are not.

## Input

The input consists of multiple test cases.

- The first line contains an integer `t` (1 ≤ t ≤ 10^4) — the number of test cases.
- Each test case consists of:
  - Two integers `n` and `k` (0 ≤ k < n ≤ 10^5) — the length of the string `s` and the number of characters to delete.
  - A string `s` of length `n`, consisting of lowercase Latin letters.

It is guaranteed that the sum of `n` over all test cases does not exceed 2 * 10^5.

## Output

For each test case, output `"YES"` if it is possible to remove exactly `k` characters from the string `s` such that the remaining characters can be rearranged to form a palindrome, and `"NO"` otherwise.

You can output the answer in any case
