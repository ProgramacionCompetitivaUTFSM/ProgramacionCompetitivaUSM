d, g, f = list(map(int, input().strip().split()))
t = 0
for i in range(0, d, g):
	if (i == d):
		break
	t += 1
for i in range(0, d, f):
	if (i % g == 0):
		continue
	t += 1
print(t - 1)