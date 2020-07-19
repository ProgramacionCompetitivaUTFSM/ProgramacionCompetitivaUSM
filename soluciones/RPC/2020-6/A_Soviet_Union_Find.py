prev = input()
prev = prev[-1]
n = int(input())
dic = {}
ans = ""
animals = []
for i in range(n):
    word = input()
    if(word[0] == prev):
        if(not ans):
            ans = word
        else:
            animals.append(word)
    if(word[0] not in dic):
        dic[word[0]] = 0
    else:
        dic[word[0]] += 1

if(ans == ""):
    print("?")
    exit()
flag = True
if(ans[-1] not in dic):
    print(ans + "!")
elif(ans[0] == ans[-1] and dic[ans[-1]] < 1):
    print(ans + "!")
else:
    for animal in animals:
        if(animal[-1] not in dic):
            print(animal + "!") 
            flag = False
            break
        elif(animal[0] == animal[-1] and dic[animal[-1]] < 1):
            print(ans + "!")
    if(flag):
        print(ans)