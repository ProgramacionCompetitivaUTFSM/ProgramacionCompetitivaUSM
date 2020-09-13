a = input().split()
b = int(a[0])
c = int(a[1])
d = int(a[2])
e = c*d
mi = min(c,d)
ma = max(c,d)

if  ma%mi != 0:
	total = int(b/c) + int(b/d)
	if e < b:
		if b%e == 0:
			total = total - int(b/e) + 1
		else:
			total = total - int(b/e)

	if b%c == 0:
		total = total - 1
	if b%d == 0:
		total = total - 1		
else:
	total = int(b/mi)

	if b%mi == 0:
		total = total -1

print(total)
