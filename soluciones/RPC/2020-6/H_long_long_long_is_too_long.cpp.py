n = int(input())
l = list(map(int, input().split(" ")))


minTemp = 999999
mini = 0
for i in range(n-2):
    temp = max(l[i], l[i+2])
    if temp < minTemp:
        minTemp = temp
        mini = i

print(mini+1, minTemp)

