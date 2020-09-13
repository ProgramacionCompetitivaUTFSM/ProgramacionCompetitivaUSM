a = int(input())
d = {}
for i in range(a):
	n = input()
	if n[0] not in d:
		d[n[0]] = []
	d[n[0]].append(n)

total = 0

for i in d.values():
	if len(i) > 1:
		p = {}
		for z in i:
			if z not in p:
				p[z] = 0
			p[z] +=1

		n = len(i)
		total += (n*(n-1))/2
		for z in p.values():
			if z > 1:
				total = total - (z*(z-1))/2


			
print(int(total*2))
		