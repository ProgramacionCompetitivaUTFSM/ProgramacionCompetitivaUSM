n = int(input())
nom = {"A":[0,dict()],"B":[0,dict()],"C":[0,dict()],"D":[0,dict()],"E":[0,dict()],"F":[0,dict()],"G":[0,dict()],"H":[0,dict()],"I":[0,dict()],"J":[0,dict()],"K":[0,dict()],"L":[0,dict()],"M":[0,dict()],"N":[0,dict()],"O":[0,dict()],"P":[0,dict()],"Q":[0,dict()],"R":[0,dict()],"S":[0,dict()],"T":[0,dict()],"U":[0,dict()],"V":[0,dict()],"W":[0,dict()],"X":[0,dict()],"Y":[0,dict()],"Z":[0,dict()],}
while (n):
	inp = input()
	if (inp not in nom[inp[0]][1]):
		nom[inp[0]][1][inp] = 0
	nom[inp[0]][1][inp] += 1
	nom[inp[0]][0] += 1
	n -= 1
total = 0
for count, names in nom.values():
	if (len(names) > 1):
		for name in names.values():
			total += name * (count - name)
print(total)