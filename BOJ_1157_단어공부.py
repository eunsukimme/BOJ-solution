word = input().lower()
# a ~ z 는 97 ~ 122 0 ~ 25 이다
# 0: a, 1: b, 2: c, ... 24: y, 25: z 의 개수인 배열 초기화
counter = [0 for i in range(26)]
for char in word:
    counter[ord(char) - 97] += 1

# 값이 가장 큰 수 추출
maxCount = max(counter)
# 가장 큰 값이 여러개라면 '?' 프린트
mostFrequentWord = [(id, count)
                    for id, count in enumerate(counter) if count == maxCount]
print('?') if len(mostFrequentWord) > 1 else print(
    chr(mostFrequentWord[0][0] + 97).upper())
