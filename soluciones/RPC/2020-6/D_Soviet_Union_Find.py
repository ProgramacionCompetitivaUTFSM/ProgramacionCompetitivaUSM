import math


def euclidian(p1, p2=(0, 0)):
    x1, y1 = p1
    x2, y2 = p2
    return ((x1 - x2)**2 + (y1 - y2)**2)**0.5


def find_wedge(new, a):
    i = 1
    increment = a
    while 1:
        if new < a:
            return i
        else:
            a += increment
            i += 1


def calculate_angle(angulo):
    if angulo >= 0:
        return angulo
    else:
        return 360 + angulo


n = int(input())
for i in range(n):
    w, b, d, s = list(map(int, input().strip().split(" ")))
    angulo_wedge = 360 / w
    t = int(input())
    suma = 0
    for throw in range(t):
        x, y = list(map(float, input().strip().split(" ")))
        punto = (x, y)
        r = euclidian(punto)
        # circulo 50pts
        if r < b:
            suma += 50
        elif r > b and r < d:
            new = math.atan2(y, x)
            degrees = math.degrees(new)
            degrees = calculate_angle(degrees)
            num = find_wedge(degrees, angulo_wedge)
            suma += num * 2
        else:
            if r < s:
                new = math.atan2(y, x)
                degrees = math.degrees(new)
                degrees = calculate_angle(degrees)
                num = find_wedge(degrees, angulo_wedge)
                suma += num
    print(suma)
