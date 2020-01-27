N, K = list(map(int, input().split()))
coins = []
for i in range(N):
    coins.append(int(input()))
cnt = 0
for i in range(N-1, -1, -1):
    if K == 0:
        break
    if K >= coins[i]:
        mok = int(K / coins[i])
        K -= coins[i] * mok
        cnt += mok

print(cnt)
