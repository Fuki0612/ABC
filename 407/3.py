
S = input()

out = 0

for i in range(len(S)-1,-1,-1):
  out += (int(S[i]) - out) % 10

out += len(S)

print(out)