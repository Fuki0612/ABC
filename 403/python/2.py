T = input().strip()
U = input().strip()

found = False
for i in range(len(T) - len(U) + 1):
  flag = True
  for k in range(len(U)):
    if not (T[i+k] == U[k] or T[i+k] == '?'):
      flag = False
      break
  if flag:
    print("Yes")
    found = True
    break

if not found:
  print("No")