N = int(input())
times = []
ans = []
for i in range(N):
    beg, end = list(map(int, input().split()))
    times.append([beg, end])
# 시간이 짧고 시작 시간이 빠른 순으로 정렬한다
times.sort(key=lambda time: (time[1], time[0]))
ans.append(times[0])
for i in range(1, len(times)):
    if(ans[-1][1] <= times[i][0]):
        ans.append(times[i])
print(len(ans))
