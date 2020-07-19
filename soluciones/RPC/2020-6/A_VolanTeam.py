word = input()

n = int(input())

i = 0
initials = []
finals = []
words = []
while i < n:
	wordi = input()
	words.append(wordi)
	initials.append(wordi[0])
	finals.append(wordi[-1])
	i += 1

#print(words)
#print(initials)
#print(finals)

i = 0
candidate = ""
flag = 0
while i < n:
	find = 1
	if initials[i] == word[-1]:
		j = 0
		while j < n:
			if j != i:
				if initials[j] == finals[i]:
					find = 0
					break
			j += 1
		if find:
			candidate = words[i]
			flag = 2
			break
		else:
			if candidate == "":
				candidate = words[i]
			flag = 1
	i += 1

if flag == 2:
	print(candidate + "!")
elif flag == 1:
	print(candidate)
else:
	print("?")


