def sprint(team):
	print(len(team))
	for i in team:
		print(i)

eeny = input().split(" ")
n = int(input())
names = []
for _ in range(n):
	names.append(input())
team1 = []
team2 = []
isTeam1 = True
i = 0
while len(names) != 0:
	i += len(eeny) - 1
	i %= len(names)
	if isTeam1:
		team1.append(names.pop(i))
		isTeam1 = False
	else:
		team2.append(names.pop(i))
		isTeam1 = True
sprint(team1)
sprint(team2)