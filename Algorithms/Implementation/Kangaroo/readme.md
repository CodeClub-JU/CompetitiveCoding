# Kangaroo

The problem states that there are two kangaroos on a number line ready to jump in the positive direction (i.e, toward positive infinity). The first kangaroo starts at location  `x1` and moves at a rate of  `v1` meters per jump. The second kangaroo starts at location `x2`  and moves at a rate of  `v2` meters per jump. Given the starting locations and movement rates for each kangaroo, can you determine if they'll ever land at the same location at the same time?


## Input Format

A single line of space seperated integers denoting the respective values of `x1`, `v1`, `x2` and `v2`.

## Output Format

Print `YES` if they can land on the same location at the same time; otherwise, print `NO`.


## Analysis

If `v2` is greater than or equal to `v1`, the kangaroos will never meet.

Else the initial distance between them is `x2-x1`. And relative speed is `v2-v1`. Thus initial distance must be divisible by relative speed.
