N = int(input())
scores = list(map(int, input().split(' ')))
# 최대값 추출
max = max(scores)
# 분자 계산
numerator = sum(map(lambda x: x / max * 100, scores))

answer = numerator / N
print(answer)
