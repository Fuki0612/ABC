

N = int(input())

A = list(map(int, input().split()))

S = set()
for i in range(N):
  S.add(A[i])
S = sorted(S)

print(len(S))
print(*S, sep=' ')