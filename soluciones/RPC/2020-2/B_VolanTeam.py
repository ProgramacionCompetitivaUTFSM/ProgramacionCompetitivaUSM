n = input()

i = n[0]

next_i = str(int(i) + 1)

j = 1
while(j < len(n)):
	i += "0"
	next_i += "0"
	j+= 1

if(abs(int(i) - int(n)) < abs(int(next_i) - int(n))):
	print(i)
elif(abs(int(i) - int(n)) > abs(int(next_i) - int(n))):
	print(next_i)
else:
	if(int(i) > int(next_i)):
		print(i)
	else:
		print(next_i)