
X, Y = map(int, input().split())

sum = 36

for x in range(1,7):
  for y in range(1,7):
    if x + y < X and abs(x - y) < Y:
      sum -= 1

print(sum / 36)