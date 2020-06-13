word = input()

dicc = {}
for char in word:
	if char not in dicc.keys():
		dicc[char] = 0
	dicc[char] += 1

rainbow = 1
for x, y in dicc.items():
	rainbow *= (y + 1) % 11092019
	rainbow = rainbow % 11092019
print(rainbow)