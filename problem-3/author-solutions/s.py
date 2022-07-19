n = int(input())
a = set([int(x) for x in input().split()])
b = [int(x) for x in input().split()]
v = []
for x in b:
  if x in a:
    v.append(x)
v.sort()
for x in v:
  print(x, end=' ')