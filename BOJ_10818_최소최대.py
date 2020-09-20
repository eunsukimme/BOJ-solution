N = int(input())
values = list(map(int, input().split(' ')))

minIndex = 0
maxIndex = 0
for i in range(N):
  if values[i] < values[minIndex] :
    minIndex = i
  if values[i] > values[maxIndex] : 
    maxIndex = i

print(values[minIndex], values[maxIndex])