
N, M = map(int, input().split())

chords = { k : 0 for k in range(N) }

for i in range(M):
  a, b = tuple(map(int, input().split()))
  chords[(a+b) % N] += 1

total = sum(chords.values())
squares = sum(v*v for v in chords.values())
ans = (total*total - squares) // 2
print(ans)