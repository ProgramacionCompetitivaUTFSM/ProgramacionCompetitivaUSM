
restaurante = "Anywhere is fine I guess"
xd = False

n = int(input())
for i in range(n):
    lenteja = False
    pankk = False
    k = int(input())
    rest = input()
    for j in range(k):
        comida = input()
        if("pea soup" in comida):
            lenteja = True
        if("pancakes" in comida):
            pankk = True
        if(lenteja and pankk):
            restaurante = rest
            xd = True
            break
    if(xd):
        break
print(restaurante)
