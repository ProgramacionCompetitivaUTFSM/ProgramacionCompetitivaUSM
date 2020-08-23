dic = {2: 1, 3: 7, 4: 4}

n = int(input())
flag = True
ans = 0
if(n in dic):
    ans = dic[n]
if(n == 7):
    ans = 11
else:
    if(n%3 == 0):
        ans = int(n/3)*7
    elif(n%3 == 1):
        ans = ((int(n/3)-1)*7) + 4
    elif(n%3 == 2):
        ans = (int(n/3)*7) + 1
print(ans)