# Combination

Find the number of combinations of `n` distinct objects taken `r` at a time `nCr`.


## Input Format :

An integer `n` denoting the number of distinct objects.
An integer `r` denoting the number of objects to be taken at a time.

## Output :

An integer denoting the value of `nCr`.


## Analysis

We know nCn = nC0 = 1 and nC1 = n.
Also nCn = (n-1)C(r-1) + (n-1)Cr
