
T = int(input())
ans = []

for _ in range(T):
  N = int(input())
  case = list(map(int, input().split()))

  sorted_case = sorted(case, key=abs)
  print(sorted_case)
  flag = True

  for j in range(0, N-2):
    if float(sorted_case[j+1] / sorted_case[j]) != float(sorted_case[j+2] / sorted_case[j+1]):
      flag = False
      ans.append("No")
      break

  if flag:
    ans.append("Yes")

print("\n".join(ans))