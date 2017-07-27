# Digit Longest Increasing Subsequence

Recently Chef learned about Longest Increasing Subsequence. To be precise, he means longest strictly increasing subsequence, when he talks of longest increasing subsequence. To check his understanding, he took his favorite n-digit number and for each of its n digits, he computed the length of the longest increasing subsequence of digits ending with that digit. Then he stored these lengths in an array named LIS.

For example, let us say that Chef's favourite 4-digit number is 1531, then the LIS array would be [1, 2, 2, 1]. The length of longest increasing subsequence ending at first digit is 1 (the digit 1 itself) and at the second digit is 2 ([1, 5]), at third digit is also 2 ([1, 3]), and at the 4th digit is 1 (the digit 1 itself).

Now Chef wants to give you a challenge. He has a valid LIS array with him, and wants you to find any n-digit number having exactly the same LIS array? You are guaranteed that Chef's LIS array is valid, i.e. there exists at least one n-digit number corresponding to the given LIS array.


## Input Format

The first line of the input contains an integer T denoting the number of test cases.

For each test case, the first line contains an integer n denoting the number of digits in Chef's favourite number.

The second line will contain n space separated integers denoting LIS array, i.e. LIS1, LIS2, ..., LISn.

## Output Format

For each test case, output a single n-digit number (without leading zeroes) having exactly the given LIS array. If there are multiple n-digit numbers satisfying this requirement, any of them will be accepted.
