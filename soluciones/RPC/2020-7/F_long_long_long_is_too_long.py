def BFS(G, p1, p2):
    q = [p1]
    V = [False]*len(G)
    parent = [-1]*len(G)
    
    i = 0
    V[p1] = True
    while len(q) > 0:
        curr = q[0]
        q = q[1:]

        if curr == p2:
            break

        for vecino in G[curr]:
            if not V[vecino]:
                q.append(vecino)
                V[vecino] = True 
                parent[vecino] = curr
    if parent[p2] == -1: return -1

    i = 0
    curr = p2
    while parent[curr] != -1:
        i += 1
        curr = parent[curr]
    return i


n = int(input())

Team1 = list(map(int, input().split(' ')))
T1 = list(zip(Team1[::2], Team1[1::2]))

Team2 = list(map(int, input().split(' ')))
T2 = list(zip(Team2[::2], Team2[1::2]))

G = dict()
for P1, (x1,y1) in enumerate(T1):
    G[P1] = []
    for P2, (x2, y2) in enumerate(T1):
        dy = (y2-y1)
        dx = (x2-x1)

        x_min = min(x1, x2)
        x_max = max(x1, x2)
        y_min = min(y1, y2)
        y_max = max(y1, y2)


        clear = True
        for x, y in T1+T2:
            if((x == x1 and y == y1) or (x == x2 and y == y2)): continue
            if(y*dx == dy*x+dx*y1-dy*x1 and x_min <= x <= x_max and y_min <= y <= y_max):
                clear = False
                break
        
        if clear:
            G[P1].append(P2)

print(BFS(G, 0, n-1))

            
