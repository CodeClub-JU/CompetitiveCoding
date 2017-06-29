n = int(input())
l = list(map(int, input().split()))

req = 0

for x in l:
    req ^= x
    
print(req)
