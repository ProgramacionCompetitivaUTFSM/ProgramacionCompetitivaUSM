a = input()
b = "".join(a.split())
b = "".join(b.split("."))
b = "".join(b.split(","))
b = "".join(b.split("!"))
b = "".join(b.split("?"))
b = "".join(b.split("¿"))
b = b.lower()
d = {}

t = [1, 3, 3, 5, 5, 5, 7, 7, 7, 7, 7, 9, 9, 9, 9, 9, 9, 9, 9, 11, 11, 11, 11, 11, 11, 11, 11]
for i in b:
	if i not in d.keys():
		d[i] = 0
	d[i]+= 1

q = sorted(d.items(), key=lambda x: x[1])

i = len(q)-1
k = 0
total = 0
while i > -1:
	total += t[k]*q[i][1] 
	k+=1
	i-=1
print(total + 3*(len(b)-1))