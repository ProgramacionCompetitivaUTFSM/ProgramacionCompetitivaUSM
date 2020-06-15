n = int(input())

i = 0

cont = 0
dicc = {}
while(i < n):
	if(i == n-1):
		line = input()
	else:
		line = input().strip()
	line = line.split("@")
	if(line[1] not in dicc.keys()):
		dicc[line[1]] = []
	izq = line[0].split("+")
	user = "".join(izq[0].split("."))
	if(user not in dicc[line[1]]):
		cont += 1
		dicc[line[1]].append(user)
	i+=1
print(cont)

