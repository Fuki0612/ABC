
A,B = map(int, input().split())

tmp = int(A / B)

if abs(tmp - A  / B) < 0.5:
    print(tmp)
else:
    print(tmp + 1)