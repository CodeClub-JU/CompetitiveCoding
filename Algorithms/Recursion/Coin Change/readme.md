# Coin Change

The problem states that you are given a set of coins of worth coin[i] (Worth of coin i is coin[i]). Count of each coin is infinite. That is suppose coin[i]=2 for some i. Then you have an infinite supply of coins of value 2. You are also given a required value `K`. Find how many ways you can get the value `K` using these coins.


## Input Format :

An integer `n` denoting the number of coins.

This will be followed by an integer `K`.

This will be followed by `n` integers denoting the worth of each coin.

## Output Format :

A single integer denoting the number of ways we can get the value `K` using these coins.


## Analysis

Let the function used to solve this task be f(array, n, k)

If K = 0
        Return 1. (That is no coin is selected)

Else if n < 0 or K < 0
        Return 0. (As no such combination is possible)

Else
        Return (f(array, n, K-array[n]) + f(array, n-1, K)).

Suppose we are at the nth coin. We have two options - include it or exclude it. If we include it we are now left with n coins and we have to form a value (K-array[n]). But if we exclude it, we now left with (n-1) coins and we have to form a value K.

