
N, S = map(int, input().split())
T = list(map(int, input().split()))

temp = 0
for i in range(N):
  if (T[i] - temp >= S + 0.5):
    print("No")
    exit()
  temp = T[i]
  
print("Yes")