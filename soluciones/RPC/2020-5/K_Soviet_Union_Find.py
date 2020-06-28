alfa = input()
word = input()
words = set()
#1

largo = len(word)

for letra in alfa:
    for i in range(largo):
        words.add(word[:i] + letra + word[i:])
        words.add(word[:i] + word[i+1:])
    words.add(word+letra)

#3 
for i in range(largo):
    for letra in alfa:
        words.add(word[:i] + letra + word[i+1:])
words.remove(word)

words = list(words)
words.sort()
for palabra in words:
    print(palabra)