Q = int(input())
queue = []

for _ in range(Q):
  query = list(map(int, input().split()))
  if query[0] == 1:
    queue.append(query[1])
  elif query[0] == 2:
    print(queue.pop(0))
