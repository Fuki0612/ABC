
N = int(input())

S = []
for _ in range(N):
  S.append(input())

mozi = set()

for i in range(N):
    for j in range(N):
        if i != j:
          mozi.add(S[i] + S[j])

print(len(mozi))