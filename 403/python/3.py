N, M, Q = map(int, input().split())

admin = [set() for _ in range(N)]
full = [False] * N 
output = []

for _ in range(Q):
  query = list(map(int, input().split()))
  if query[0] == 1:
    x, y = query[1] - 1, query[2] - 1
    if not full[x]:
      admin[x].add(y)
  elif query[0] == 2:
    x = query[1] - 1
    full[x] = True
    admin[x].clear()
  elif query[0] == 3:
    x, y = query[1] - 1, query[2] - 1
    if full[x] or y in admin[x]:
      output.append("Yes")
    else:
     output.append("No")

print("\n".join(output))