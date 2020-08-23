def classify(n):
    s = 1
    aux = 2
    while aux != n:
        if n % aux == 0:
            s += int(n / aux)
        aux += 1

    if s == n:
        print("perfect")
    elif s < n:
        print("deficient")
    else:
        print("abundant")


t = int(input())
while t:
    n = int(input())
    classify(n)
    t -= 1
