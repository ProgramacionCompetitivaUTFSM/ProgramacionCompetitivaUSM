fila1="abcdefghi"
fila2="jklmnopqr"
fila3="stuvwxyz"
n=int(input())


for i in range(0,n):
    flag=True
    palabras=input()
    palabras=palabras.strip().split()
    if (len(palabras[0])==len(palabras[1])):
        if (palabras[0]==palabras[1]):
            print("1")
            pass
        else:
            for j in range(0,len(palabras[0])):
                if palabras[0][j] in fila1:
                    temp=fila1.find(palabras[0][j])
                    if temp==0:
                        if palabras[1][j]==fila1[temp] or palabras[1][j]==fila1[temp+1] or palabras[1][j]==fila2[temp] or palabras[1][j]==fila2[temp+1]:
                            pass
                        else:
                            flag=False
                            break
                    elif temp==8:
                        if palabras[1][j]==fila1[temp] or palabras[1][j]==fila1[temp-1] or palabras[1][j]==fila2[temp] or palabras[1][j]==fila2[temp-1]:
                            pass
                        else:
                            flag=False
                            break
                    else:
                        if palabras[1][j]==fila1[temp] or palabras[1][j]==fila1[temp+1] or palabras[1][j]==fila2[temp] or palabras[1][j]==fila2[temp+1] or palabras[1][j]==fila1[temp-1] or palabras[1][j]==fila2[temp-1]:
                            pass
                        else:
                            flag=False
                            break
                elif palabras[0][j] in fila2:
                    temp=fila2.find(palabras[0][j])
                    if temp==0:
                        if palabras[1][j]==fila2[temp] or palabras[1][j]==fila1[temp] or palabras[1][j]==fila3[temp] or palabras[1][j]==fila2[temp+1]or palabras[1][j]==fila1[temp+1] or palabras[1][j]==fila3[temp+1]:
                            pass
                        else:
                            flag=False
                            break
                    elif temp==8:
                        if palabras[1][j]==fila2[temp] or palabras[1][j]==fila1[temp] or palabras[1][j]==fila2[temp-1]or palabras[1][j]==fila1[temp-1] or palabras[1][j]==fila3[temp-1]:
                            pass
                        else:
                            flag=False
                            break
                    elif temp==7:
                        if palabras[1][j]==fila2[temp] or palabras[1][j]==fila1[temp] or palabras[1][j]==fila3[temp] or palabras[1][j]==fila2[temp+1]or palabras[1][j]==fila1[temp+1] or palabras[1][j]==fila3[temp-1]or palabras[1][j]==fila2[temp-1]or palabras[1][j]==fila1[temp-1]:
                            pass
                        else:
                            flag=False
                            break
                    else:
                        if palabras[1][j]==fila2[temp] or palabras[1][j]==fila1[temp] or palabras[1][j]==fila3[temp] or palabras[1][j]==fila2[temp+1]or palabras[1][j]==fila1[temp+1] or palabras[1][j]==fila3[temp+1] or palabras[1][j]==fila3[temp-1]or palabras[1][j]==fila2[temp-1]or palabras[1][j]==fila1[temp-1]:
                            pass
                        else:
                            flag=False
                            break
                elif palabras[0][j] in fila3:
                    temp=fila3.find(palabras[0][j])
                    if temp==0:
                        if palabras[1][j]==fila3[temp] or palabras[1][j]==fila3[temp+1] or palabras[1][j]==fila2[temp] or palabras[1][j]==fila2[temp+1]:
                            pass
                        else:
                            flag=False
                            break
                    if temp==7:
                        if palabras[1][j]==fila3[temp] or palabras[1][j]==fila2[temp] or palabras[1][j]==fila2[temp+1] or palabras[1][j]==fila3[temp-1] or palabras[1][j]==fila2[temp-1]:
                            pass
                        else:
                            flag=False
                            break
                    else:
                        if palabras[1][j]==fila3[temp] or palabras[1][j]==fila3[temp+1] or palabras[1][j]==fila2[temp] or palabras[1][j]==fila2[temp+1] or palabras[1][j]==fila3[temp-1] or palabras[1][j]==fila2[temp-1]:
                            pass
                        else:
                            flag=False
                            break
            if flag:
                print("2")
                pass
            else:
                print("3")
                pass
    else:
        print("3")
        pass