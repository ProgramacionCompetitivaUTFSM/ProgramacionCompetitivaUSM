n = int(input())

temps = list(map(int, input().split(" ")))

i = 1
maxTemp = 10000000
theDay = 0
while i < n -1:
	if temps[i - 1] > temps[i + 1]:
		if maxTemp > temps[i - 1]:
			maxTemp = temps[i - 1]
			theDay = i - 1
	else:
		if maxTemp > temps[i +1]:
			maxTemp = temps[i + 1]
			theDay = i - 1
	i += 1

print(theDay + 1, maxTemp)
