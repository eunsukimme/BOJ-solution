values = []
for i in range(10):
  values.append(int(input()) % 42)

uniqueValues = list(set(values))
print(len(uniqueValues))