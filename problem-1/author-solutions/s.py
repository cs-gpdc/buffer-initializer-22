s = input()
l = u = 0
for c in s:
  if c.isupper(): u+=1
  elif c.islower(): l+=1
print("Yes" if u > l else "No")