def score(do):
  As = A[:]
  tmp = 0
  while do:
    ten = As.pop()
    if do.pop() == 0:
      tmp = (tmp | ten) - (tmp & ten)
  return tmp

H, W = map(int, input().split())
A = list()
for _ in range(H):
  A += list(map(int, input().split()))

dom = [0] * H * W

ord = list(range(H * W))
ans = score(dom[:])
while ord:
  now = ord.pop()
  if dom[now] == 0 and (now + 1) % W != 0 and dom[now + 1] == 0:
    dom[now] = 1
    dom[now + 1] = -1
    ord.append(now)
  elif dom[now] <= 1 and now < W * (H - 1):
    dom[now] = 2
    dom[now + W] = -2
    ord.append(now)
    if (now + 1) % W != 0 and dom[now + 1] == -1:
      dom[now + 1] = 0
  else:
    if (now + 1) % W != 0 and dom[now + 1] == -1:
      dom[now + 1] = 0
    if now < W * (H - 1):
      dom[now + W] = 0
    dom[now] = 0
    if ord:
      ans = max(ans, score(dom[:]))
      continue
    else:break
  ans = max(ans, score(dom[:]))
  for i in range(now, H * W):
    if dom[i] == 0:
      ord.append(i)
ans = max(ans, score(dom[:]))
print(ans)