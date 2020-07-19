kb = {
	'a': 'abjk',
	'b': 'bacjkl',
	'c': 'cbdklm',
	'd': 'dcelmn',
	'e': 'edfmno',
	'f': 'fegnop',
	'g': 'gfhopq',
	'h': 'hgipqr',
	'i': 'ihqr',
	'j': 'jabkst',
	'k': 'kabcjlstu',
	'l': 'lbcdkmtuv',
	'm': 'mcdelnuvw',
	'n': 'ndefmovwx',
	'o': 'oefgnpwxy',
	'p': 'pfghoqxyz',
	'q': 'qghipryz',
	'r': 'rhiqz',
	's': 'sjkt',
	't': 'tjklsu',
	'u': 'uklmtv',
	'v': 'vlmnuw',
	'w': 'wmnovx',
	'x': 'xnopwy',
	'y': 'yopqxz',
	'z': 'zpqry',
}

n = int(input())
for _ in range(n):
	a, b = input().split()
	if len(a) != len(b):
		print(3)
		continue
	elif a == b:
		print(1)
		continue
	else:
		sim = True
		for pos in range(len(a)):
			if a[pos] not in kb[b[pos]]:
				sim = False
				break
		print(2 if sim == True else 3)