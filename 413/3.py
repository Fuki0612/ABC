from collections import deque

Q = int(input())

q = deque()
for _ in range(Q):
	query = list(map(int, input().split()))
	if query[0] == 1:
		_, c, x = query
		q.append((c, x))
	else:
		_, k = query
		res = 0

		while k > 0:
			c, x = q.popleft()
			take = min(c, k)
			res += take * x
			k -= take
			c -= take
			
			if c > 0:
				q.appendleft((c, x))

		print(res)
