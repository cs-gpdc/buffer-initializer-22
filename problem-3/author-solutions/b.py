n = int(input())
a = [int(x) for x in input().split()]
b = [int(x) for x in input().split()]
v = []
for x in a:
  for y in b:
    if x==y:
      v.append(x)
v.sort()
for x in v:
  print(x, end=' ')