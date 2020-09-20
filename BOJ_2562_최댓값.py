values = []
maxIndex = 0
for i in range(9):
  values.append(int(input()))
  if values[i] > values[maxIndex]:
    maxIndex = i

print(values[maxIndex])
print(maxIndex + 1)