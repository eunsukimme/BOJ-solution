n = input()  # 지불 금액
cnt = 0  # 거스름돈 수
# 거스름돈을 줘야 되는데 가장 큰 것 부터 준다
# 먼저 1000을 받았으니 여기서 n 만큼 빼주면 그게 거스름돈임
remain = 1000 - int(n)
while remain > 0:
    if remain >= 500:
        remain -= 500
        cnt += 1
    elif remain >= 100:
        remain -= 100
        cnt += 1
    elif remain >= 50:
        remain -= 50
        cnt += 1
    elif remain >= 10:
        remain -= 10
        cnt += 1
    elif remain >= 5:
        remain -= 5
        cnt += 1
    elif remain >= 1:
        remain -= 1
        cnt += 1

print(cnt)
