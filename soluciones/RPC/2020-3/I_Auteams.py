n = int(input())
lista=[]
diferencias=[]
globo =n
flag= False
gas = input()
gas=gas.strip().split(" ")
for i in gas:
	lista.append(int(i))
lista.sort(reverse=True)
for gas in lista:
    if(gas>globo):
        flag = True    
    diferencias.append(float(gas/globo))
    globo-=1
if(flag):
    print("impossible")
else:
    if(min(diferencias)==0.0):
        print("0")
    else:
        print(min(diferencias))
