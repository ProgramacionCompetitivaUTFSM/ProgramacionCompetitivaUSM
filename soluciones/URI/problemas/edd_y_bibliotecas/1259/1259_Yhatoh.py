n = int(input())

par = []
impar = []
while(n > 0):
	i = int(input())

	if(i % 2 == 0):
		par.append(i)
	else:
		impar.append(i)
	n -= 1

par.sort()

impar.sort()
impar.reverse()

for x in par:
	print(x)
for x in impar:
	print(x)