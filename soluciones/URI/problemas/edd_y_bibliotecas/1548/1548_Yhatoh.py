n = int(input())


while(n > 0):
	m = int(input())
	grades = list(map(int, input().split(" ")))

	grades2 = []
	for x in grades:
		grades2.append(x)
	grades2.sort()
	grades2.reverse()
	i = 0
	cant = 0
	while(i < len(grades)):
		if(grades[i] == grades2[i]):
			cant += 1
		i += 1
	print(cant)
	n -= 1