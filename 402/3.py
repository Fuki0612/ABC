
N, M = map(int, input().split())

A = []
for i in range(M):
  row = list(map(int, input().split()))
  row.pop(0)
  A.append(set(row))
    
pos = {}
for j, s in enumerate(A):
  for x in s:
    pos.setdefault(x, []).append(j)

B = list(map(int, input().split()))
ans = 0
output = []
for b in B:
  if b in pos:
    for j in pos[b]:
      if A[j] is None:
        continue
      if b in A[j]:
        A[j].remove(b)
        if not A[j]:
          A[j] = None
          ans += 1
    pos[b] = []
  output.append(str(ans))

print("\n".join(output))