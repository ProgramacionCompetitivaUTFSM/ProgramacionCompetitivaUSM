dic = {"0":"O", "1":"L", "2":"Z", "3":"E", "5":"S", "6":"B", "7":"T", "8":"B"}
malas = []
N, M = map(int, input().split(" "))
for i in range(N):
    malas.append(input())
for i in range(M):
    xd = True
    patente = input()
    nuevo = ""
    for k in patente:
        if(k in dic.keys()):
            nuevo += dic[k]
        else:
            nuevo += k
    for mala in malas:
        if(mala in nuevo):
            print("INVALID")
            xd = False
            break
    if(xd):
        print("VALID")
