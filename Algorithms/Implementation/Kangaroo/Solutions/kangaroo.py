#!/bin/python3

import sys


x1,v1,x2,v2 = input().strip().split(' ')
x1,v1,x2,v2 = [int(x1),int(v1),int(x2),int(v2)]

if x1 == x2 and v1 == v2 : print("YES")
elif x1 == x2 and v2 > v1 : print("NO")
elif v2 >= v1 and x2 >= x1 : print("NO")
else :
    if (x2-x1) % (v2 -v1) == 0 : print("YES")
    else : print("NO")
