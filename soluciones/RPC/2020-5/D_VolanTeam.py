a = int(input())
f = 1

while a > 0:

	b = int(input())
	z = input().strip()
	c = 0
	d = 0
	while b > 0:
		v = input().strip()
		if v == "pea soup":
			c = 1
		elif v == "pancakes":
			d = 1
		if d == 1 and c == 1:
			f = 0
			print(z)
			b = 0
			a = 0
		b -= 1
	a-=1
if f:
	print("Anywhere is fine I guess")