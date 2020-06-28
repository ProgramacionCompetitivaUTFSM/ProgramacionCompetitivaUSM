n = int(input())

i = 0
maxS = -1
while i < n:
	t, d = list(map(int, input().split(" ")))
	if(not (t == 0 and  d == 0)):
		S = (d - dAnt) / (t - tAnt)
		if( S > maxS):
			maxS = S
	dAnt = d
	tAnt = t
	i += 1

print(int(maxS))