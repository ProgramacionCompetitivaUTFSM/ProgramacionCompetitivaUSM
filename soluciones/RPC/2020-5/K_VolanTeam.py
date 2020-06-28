letter = set()

alph = input()
for i in alph:
	letter.add(i)

word = input()
largo = len(word)
rangoLargo = range(largo)
words = set()

for x in letter:
	for i in rangoLargo:
		word2 = word[0:i] + x + word[i:largo]
		words.add(word2)
	words.add(word + x)

for i in rangoLargo:
	words.add(word[0:i] + word[i + 1: largo])

for x in letter:
	for i in rangoLargo:
		words.add(word[0:i] + x + word[i + 1: largo])

words = list(words)
words.sort()
for x in words:
	if x != word:
		print(x)
