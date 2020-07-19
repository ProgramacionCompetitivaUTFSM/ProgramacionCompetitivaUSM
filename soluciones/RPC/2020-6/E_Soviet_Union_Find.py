cosa = input().strip().split(' ')
saltos = len(cosa)
ninos = []
n = int(input())
total = 0
team1 = []
team2 = []
teamActual = True
for a in range(n):
    nino = input()
    ninos.append(nino)

while(len(ninos)>0):
    total += saltos
    if(teamActual):
        team1.append(ninos[((total-1)%len(ninos))])
        teamActual=False
    else:
        team2.append(ninos[((total-1)%len(ninos))])
        teamActual=True
    del ninos[((total-1)%len(ninos))]
    if(len(ninos)!= 0):
        total = ((total-1)%(len(ninos)+1))  
    

print(len(team1))
for element in team1:
    print(element)
print(len(team2))
for m in team2:
    print(m)

