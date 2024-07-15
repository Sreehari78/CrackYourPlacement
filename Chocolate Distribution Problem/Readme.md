# Chocolate Distribution Problem

## Problem Description

Given an array `A[]` of positive integers of size `N`, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are `M` students, and the task is to distribute chocolate packets among `M` students such that:
1. Each student gets exactly one packet.
2. The difference between the maximum number of chocolates given to a student and the minimum number of chocolates given to a student is minimized.

## Examples

### Example 1

**Input:**
N = 8, M = 5
A = {3, 4, 1, 9, 56, 7, 9, 12}

**Output:**
6


**Explanation:**
The minimum difference between maximum chocolates and minimum chocolates is `9 - 3 = 6` by choosing the following `M` packets: `{3, 4, 9, 7, 9}`.

### Example 2

**Input:**
N = 7, M = 3
A = {7, 3, 2, 4, 9, 12, 56}

**Output:**
2


**Explanation:**
The minimum difference between maximum chocolates and minimum chocolates is `4 - 2 = 2` by choosing the following `M` packets: `{3, 2, 4}`.

## Task

You do not need to take any input or print anything. Your task is to complete the function `findMinDiff()` which takes the array `A[]`, `N`, and `M` as input parameters and returns the minimum possible difference between the maximum number of chocolates given to a student and the minimum number of chocolates given to a student.

## Expected Complexity

- **Time Complexity:** O(N * Log(N))
- **Auxiliary Space:** O(1)

## Constraints

- 1 ≤ T ≤ 100
- 1 ≤ N ≤ 10^5
- 1 ≤ Ai ≤ 10^9
- 1 ≤ M ≤ N
