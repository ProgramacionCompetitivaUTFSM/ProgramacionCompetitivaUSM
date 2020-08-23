import math

t = int(input())
while (t):
	n = int(input())
	divs = 0
	for i in range(1, math.floor(math.sqrt(n)) + 1):
		if (n % i == 0):
			if (i == 1):
				divs += i
			elif (n // i == i):
				divs += i
			else:
				divs += i + n // i
			# print("divs", divs, "\ti", i)
	if (divs < n):
		print("deficient")
	elif (divs > n):
		print("abundant")
	else:
		print("perfect")
	t -= 1