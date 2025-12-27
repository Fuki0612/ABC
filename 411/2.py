
N = int(input())
D = list(map(int, input().split()))

for i in range(N):
  out = 0
  for j in range(i, N-1):
    out += D[j]
    print(out, end=' ')
  print()