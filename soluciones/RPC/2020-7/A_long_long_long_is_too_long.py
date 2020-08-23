inp = int(input())
tot = 0
while (inp > 0):
	if (inp == 4):
		tot += 4
		inp -= 4
	elif (inp == 5):
		tot += 8
		inp -= 5
	elif (inp == 2):
		inp -= 2
		tot += 1
	else:
		tot += 7
		inp -= 3
print(tot)