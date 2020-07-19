a=int(input())

d = [["a","b","c","d","e","f","g","h","i"],
	 ["j","k","l","m","n","o","p","q","r"],
	 ["s","t","u","v","w","x","y","z"]]
for i in range(a):
	c,b = input().strip().split()

	if len(c) != len(b):
		print(3)
	elif c == b:
		print(1)
	else:
		f = 1
		for le in range(len(c)):
			pos = ord(c[le]) - 97
			if pos == 0:
				if b[le] not in ["a","j","b","k"]:
					print(3)
					f = 0
					break

			elif  pos > 0 and pos < 8:
				if b[le] not in d[0][pos-1: pos+2] and b[le] not in d[1][pos-1: pos+2]:
					print(3)
					f = 0
					break	

			elif pos == 8:
				if b[le] not in ["i","h","q","r"]:
					print(3)
					f = 0
					break

			elif pos == 9:
				if b[le] not in ["j","a","k","b","s","t"]:
					print(3)
					f = 0
					break

			elif pos > 9 and pos < 17:
				pos = pos-9
				if b[le] not in d[0][pos-1: pos+2] and b[le] not in d[1][pos-1: pos+2] and b[le] not in d[2][pos-1: pos+2]:
					print(3)
					f = 0
					break

			elif pos == 17:
				if b[le] not in ["h","i","q","r","z"]:
					print(3)
					f = 0
					break

			elif pos == 18:
				if b[le] not in ["s","j","t","k"]:
					print(3)
					f = 0
					break

			elif  pos > 18 and pos < 25:
				pos = pos - 18
				if b[le] not in d[1][pos-1: pos+2] and b[le] not in d[2][pos-1: pos+2]:
					print(3)
					f = 0
					break
			elif pos == 25:
				if b[le] not in ["y","p","q","z","r"]:
					print(3)
					f = 0
					break
		if f:
			print(2)
