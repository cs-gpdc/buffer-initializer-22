import math 

def is_perfect_square(n):
    root = int(round(math.sqrt(n)))
    return n == root * root

l = [int(x) for x in input().split()]
l.sort()
q, p = l
if (is_perfect_square(p*p + q*q)):
  # p^2 + q^2 = r^2
  a = (p * q) * 0.5
else:
  r = math.sqrt(p*p - q*q)
  # q^2 + r^2 = p^2
  a = (q * r) * 0.5
print(int(a))