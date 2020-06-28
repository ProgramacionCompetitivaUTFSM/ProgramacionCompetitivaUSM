bad = 0
plates = 0 

bad, plates = map(int, input().split())


badStrings = []

for i in range(bad):
	badStrings.append(input());


for i in range(plates):
	s = input()

	s = s.replace("0", "O")
	s = s.replace("1", "L")
	s = s.replace("2", "Z")
	s = s.replace("3", "E")
	s = s.replace("5", "S")
	s = s.replace("6", "B")
	s = s.replace("7", "T")
	s = s.replace("8", "B")

	flag = False;
	for j in badStrings:
		if j in s:
			flag = True
			continue;

	if flag:
		print("INVALID")
	else:
		print("VALID")