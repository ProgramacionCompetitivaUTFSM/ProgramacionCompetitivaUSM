rima=input().strip().split()
n=int(input())
niños=[]
equipo1=[]
equipo2=[]
for i in range (0,n):
    temp=input()
    niños.append(temp)

while (len(niños)>0):
    if len(niños)>n//2:
        if(len(rima)<=len(niños)):
            equipo1.append(niños[len(rima)-1])
            niños.pop(len(rima)-1)
        else:
            equipo1.append(niños[(len(niños)%len(rima))-1])
            niños.pop((len(niños)%len(rima))-1)
    else:
        if(len(rima)<=len(niños)):
            equipo2.append(niños[len(rima)-1])
            niños.pop(len(rima)-1)
        else:
            equipo2.append(niños[(len(niños)%len(rima))-1])
            niños.pop((len(niños)%len(rima))-1)
print(len(equipo1))
for n1 in equipo1:
    print(n1)
print(len(equipo2))
for n2 in equipo2:
    print(n2)