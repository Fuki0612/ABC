N, M = map(int, input().split())

diff = [0] * (N + 2)

for _ in range(M):
    l, r = map(int, input().split())
    diff[l] += 1
    diff[r + 1] -= 1

cur = 0
res = float('inf')
for i in range(1, N + 1):
    cur += diff[i]
    res = min(res, cur)

print(res)