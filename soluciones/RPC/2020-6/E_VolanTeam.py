rhyme = input().split(" ")
cantRhyme = len(rhyme)

n = int(input())
people = []

i = 0
while i < n:
	person = input()
	people.append(person)
	i += 1

select = 0
flag = 1
team1 = []
team2 = []
while people != []:
	select = (select + cantRhyme - 1) % n
	if flag:
		team1.append(people[select])
		flag = 0
	else:
		team2.append(people[select])
		flag = 1

	del people[select]
	n = len(people)

print(len(team1))
for t in team1:
	print(t)
print(len(team2))
for t in team2:
	print(t)
