c, p = map(int, input().strip().split())
if c == 1:
    print(p)
else:
    price = p * c - 2 * (c - 1)
    print(price)
