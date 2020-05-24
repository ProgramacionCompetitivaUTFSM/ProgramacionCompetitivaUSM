  #B
from math import log10, floor
def round_to_1(x):
  return round(x, -int(floor(log10(abs(x)))))
  
n=int(input())

print(round_to_1(n))