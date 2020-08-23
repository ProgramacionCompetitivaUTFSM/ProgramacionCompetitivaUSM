#include <bits/stdc++.h>
using namespace std;

const int MAX_LINEAS = 121;
const int MAX_CHARS = 81;

int columnas;
int* filas;
int dist[MAX_LINEAS*MAX_CHARS];

int subir(int pos) {
    if (pos/MAX_CHARS == 0) return pos;
    int x = (pos / MAX_CHARS) - 1;
    int y = filas[x] < pos%MAX_CHARS ? filas[x] : pos%MAX_CHARS;
    return MAX_CHARS * x +y;
}

int bajar(int pos) {

    if (pos / MAX_CHARS == columnas-1) return pos;
    int x = (pos / MAX_CHARS) + 1;
    int y = filas[x] < pos%MAX_CHARS ? filas[x] : pos%MAX_CHARS;
    return MAX_CHARS*x+y;
}

int izq(int pos) {
    if (pos == 0) return pos;
    int x,y;
    if (pos%MAX_CHARS > 0) {
        x = pos/MAX_CHARS;
        y = pos%MAX_CHARS - 1;
    }
    else {
        x = pos/MAX_CHARS - 1;
        y = filas[x];
    }
    return MAX_CHARS*x+y;
}

int der(int pos) {
    if (pos/MAX_CHARS == columnas-1 && pos%MAX_CHARS == filas[columnas-1]) return pos;
    int x,y;
    if (pos%MAX_CHARS < filas[pos/MAX_CHARS]) {
        x = pos / MAX_CHARS;
        y = pos % MAX_CHARS + 1;
    }
    else {
        x = pos / MAX_CHARS + 1;
        y = 0;
    }
    return MAX_CHARS*x+y;
}

int main() {
	int t, s, e, x, y; cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> columnas;
        filas = new int[columnas];
    
        for (int i=0; i<columnas; i++) cin >> filas[i];
        cin >> x >> y;

        s = MAX_CHARS * (x-1) + y;
        cin >> x >> y;
        e = MAX_CHARS * (x-1) + y;

        queue <int> q;

        for (int i=0; i<MAX_LINEAS*MAX_CHARS; i++)
            dist[i] = -1;

        q.push(s); dist[s] = 0;

        while (q.size() > 0) {
            int pos = q.front(); q.pop();

            if (pos == e){
                cout << dist[e] << '\n';
                break;
            }

            int i = izq(pos);
            int d = der(pos);
            int s = subir(pos);
            int b = bajar(pos);

            if (dist[d] == -1) {
                q.push(d);
                dist[d] = dist[pos] + 1;
            }

            if (dist[i] == -1) {
                q.push(i);
                dist[i] = dist[pos] + 1;
            }

            if (dist[s] == -1) {
                q.push(s);
                dist[s] = dist[pos] + 1;
            }

            if (dist[b] == -1) {
                q.push(b);
                dist[b] = dist[pos] + 1;
            }
        }
	}
    return 0;
}
