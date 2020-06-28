a,b = list(map(int, input().split()))

l = []

while a > 0:
	c = input().strip()
	l.append(c)
	a -= 1

while b > 0:
	f = 1
	c = input().strip()
	c = c.replace("0", "O")
	c = c.replace("1", "L")
	c = c.replace("2", "Z")
	c = c.replace("3", "E")
	c = c.replace("5", "S")
	c = c.replace("6", "B")
	c = c.replace("7", "T")
	c = c.replace("8", "B")
	for i in l:
		if i in c:
			print("INVALID")
			f = 0
			break

	if f:
		print("VALID")
	b-=1
