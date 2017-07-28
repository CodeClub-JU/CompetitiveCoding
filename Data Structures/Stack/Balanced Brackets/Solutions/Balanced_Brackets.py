def is_matched(expression):
    l = []
    for x in expression:
        if x == '{' : l.append('}')
        elif x == '[' : l.append(']')
        elif x == '(' : l.append(')')
        else:
            if (len(l) == 0) or not (l[-1][0] == x) : return False
            l.pop()
    return len(l) == 0
    

t = int(input().strip())
for a0 in range(t):
    expression = input().strip()
    if is_matched(expression) == True:
        print("YES")
    else:
        print("NO")
