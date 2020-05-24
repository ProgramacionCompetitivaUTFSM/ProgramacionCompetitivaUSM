n = int(input())
pylons = [[0] * (10**5 + 1) for _ in range(2)]
res = 0
l = 0

for i in range(n):
	x, y, a = list(map(int, input().split()))
	pylons[a - 1][y] += 1

for i in range(10**5):
	a = (pylons[0][i] - l) + pylons[1][i]
	b = pylons[0][i + 1] + pylons[1][i + 1]
	u = min(a, b)
	l = max(u - pylons[1][i + 1], 0)
	res += u

print(res)
