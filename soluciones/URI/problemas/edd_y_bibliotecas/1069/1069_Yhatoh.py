n = int(input())

while(n > 0):
	line = input()
	line = line.replace(".","")

	i = 0
	posInit = -1
	posFinal = -1
	j = 0
	while(1):
		if(line[i] == "<"):
			posInit = i
		elif(posInit != -1 and line[i] == ">"):
			posFinal = i
			line = line[0:posInit] + line[posFinal + 1:]
			i = -1
			posInit = -1
			posFinal = -1
			j += 1
		i += 1
		if(i == len(line)):
			break
	print(j)
	n -= 1