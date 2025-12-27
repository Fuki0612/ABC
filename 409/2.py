N = int(input())
A = list(map(int, input().split()))

MAX = max(A) + 2
count = [0] * (MAX)

# 区間加算
for ai in A:
    count[0] += 1
    if ai + 1 < MAX:
        count[ai + 1] -= 1

print(count)

# 累積和
for i in range(1, MAX):
    count[i] += count[i - 1]

print(count)

# 条件を満たす最大の i を探す
for i in range(N, 0, -1):
    if i < MAX and count[i] >= i:
        print(i)
        exit()

print("No")
