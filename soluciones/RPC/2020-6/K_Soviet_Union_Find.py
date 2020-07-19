dic={ 
    "a":["b","j","k"],
    "b":["a","j","k","l","c"],
    "c":["b","k","l","m","d"],
    "d":["c","l","m","n","e"],
    "e":["d","m","n","o","f"],
    "f":["e","n","o","p","g"],
    "g":["f","o","p","q","h"],
    "h":["g", "p", "q", "r", "i"],
    "i":["r","q","h"],
    "j":["a","b","k", "s", "t"],
    "k":["j","a", "b","c", "l", "s", "t", "u"],
    "l":["k","b","c","d","m", "t", "u", "v"],
    "m":["l","c","d","e","n", "u", "v", "w"],
    "n":["m","d","e","f","o", "v", "w", "x"],
    "o":["n","e","f","g","p", "w", "x", "y"],
    "p":["o","f","g","h","q", "x", "y", "z"],
    "q":["p","g","h","i","r", "z", "y"],
    "r":["q","h","i", "z"],
    "s":["j","k","t"],
    "t":["s","j","k","l","u"],
    "u":["t","k","l","m","v"],
    "v":["u","l","m","n","w"],
    "w":["v", "m", "n", "o", "x"],
    "x":["w", "n", "o", "p","y"],
    "y":["x","o", "p", "q","z"],
    "z":["y", "p", "q", "r"]
}
n = int(input())
for i in range(n):
    case = 3
    p1,p2=input().strip().split(' ')
    igualdad = True
    if(len(p1) == len(p2)):
        for elemen in range(len(p1)):
            if(igualdad and p1[elemen]==p2[elemen]):
                case = 1
                continue
            elif((p1[elemen] in dic[p2[elemen]]) or p1[elemen]==p2[elemen]):
                igualdad = False
                case = 2
            else:
                igualdad = False
                case = 3
                break
    print(str(case))




