
N, M = map(int,input().split())
A = list(map(int,input().split()))

sum = 0
for x in A:
  sum += x

if sum <= M:
  print("Yes")
else:
  print("No")
