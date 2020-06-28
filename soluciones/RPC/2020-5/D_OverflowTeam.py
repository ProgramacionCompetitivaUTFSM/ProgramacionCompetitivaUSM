def main():
    restaurants = 0
    soup = False
    pancakes = False
    name = ""
    s = ""

    restaurants = int(input())

    z = 0
    for i in range(restaurants):
        z = int(input())
        name = input()

        for j in range(z):
            s = input()

            if "pea soup" in s:
                soup = True;
            if "pancakes" in s:
                pancakes = True;


        if soup and pancakes:
            print(name)
            return 0;
        
        soup = False;
        pancakes = False;


    print("Anywhere is fine I guess");

    return 0;


main();