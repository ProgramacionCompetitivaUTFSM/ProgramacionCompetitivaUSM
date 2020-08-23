#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y, r, tx, ty, s;

	cin >> x >> y >> r >> tx >> ty >> s;

	//Esquinas del cuadrado
	if((tx - x) * (tx - x) + (ty - y) * (ty - y) < r * r ||
	   (tx + s - x) * (tx + s - x) + (ty - y) * (ty - y) < r * r ||
	   (tx - x) * (tx - x) + (ty + s - y) * (ty + s - y) < r * r ||
	   (tx + s - x) * (tx + s - x) + (ty + s - y) * (ty + s - y) < r * r)
		cout << 2 << "\n";
	//puntos mas lejados del circulo tan dentro de cuadrado
	else if(x > tx && x < tx + s && y > ty && y < ty + s ||
		    x + r > tx && x + r < tx + s && y > ty && y < ty + s ||
		    x > tx && x < tx + s && y + r > ty && y + r < ty + s ||
		    x - r > tx && x - r < tx + s && y > ty && y < ty + s ||
		    x > tx && x < tx + s && y - r > ty && y - r < ty + s)
		cout << 2 << "\n";
	//Esquina justo tocan circulo
	else if((tx - x) * (tx - x) + (ty - y) * (ty - y) == r * r ||
	   (tx + s - x) * (tx + s - x) + (ty - y) * (ty - y) == r * r ||
	   (tx - x) * (tx - x) + (ty + s - y) * (ty + s - y) == r * r ||
	   (tx + s - x) * (tx + s - x) + (ty + s - y) * (ty + s - y) == r * r)
		cout << 1 << "\n";
	//Puntos mas lejanos del circulo tocan borde cuadrado
	else if(x == tx && x < tx + s && y >= ty && y <= ty + s ||
			x > tx && x == tx + s && y >= ty && y <= ty + s ||
			x >= tx && x <= tx + s && y == ty && y <= ty + s ||
			x >= tx && x <= tx + s && y >= ty && y == ty + s)
		cout << 1 << "\n";
	else if(x + r == tx && x + r < tx + s && y >= ty && y <= ty + s ||
			x + r > tx && x + r == tx + s && y >= ty && y <= ty + s ||
			x + r >= tx && x + r <= tx + s && y == ty && y <= ty + s ||
			x + r >= tx && x + r <= tx + s && y >= ty && y == ty + s)
		cout << 1 << "\n";
	else if(x - r == tx && x - r < tx + s && y >= ty && y <= ty + s ||
			x - r > tx && x - r == tx + s && y >= ty && y <= ty + s ||
			x - r >= tx && x - r <= tx + s && y == ty && y <= ty + s ||
			x - r >= tx && x - r <= tx + s && y >= ty && y == ty + s)
		cout << 1 << "\n";
	else if(x == tx && x < tx + s && y + r >= ty && y + r <= ty + s ||
			x > tx && x == tx + s && y + r >= ty && y + r <= ty + s ||
			x >= tx && x <= tx + s && y + r == ty && y + r <= ty + s ||
			x >= tx && x <= tx + s && y + r >= ty && y + r == ty + s)
		cout << 1 << "\n";
	else if(x == tx && x < tx + s && y - r >= ty && y - r <= ty + s ||
			x > tx && x == tx + s && y - r >= ty && y - r <= ty + s ||
			x >= tx && x <= tx + s && y - r == ty && y - r <= ty + s ||
			x >= tx && x <= tx + s && y - r >= ty && y - r == ty + s)
		cout << 1 << "\n";
	//IMPOSIBLE :D
	else cout << 0 << "\n";
	return 0;
}