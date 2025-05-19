S = input()
ans = ""

for i in range(len(S)):
  if S[i] == S[i].upper():
    ans += S[i]

print(ans)