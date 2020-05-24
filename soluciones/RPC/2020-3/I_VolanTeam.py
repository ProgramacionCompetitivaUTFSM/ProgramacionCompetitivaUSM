x = int(input())
c = list(map(int, input().split()))
c2 = list(c)

c.sort()
r = float("inf")
i = 1
while i <= len(c):
	a = c[i-1] / i
	if a > 1:
		r = "impossible"
		break
	else:
		r = min(r, a)
	i += 1
print(r)