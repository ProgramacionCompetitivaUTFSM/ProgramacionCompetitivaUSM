#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	long long p = 0;

	int x[1500], y[1500];
	int maxX = -1e7, maxY = -1e7, minX = 1e7, minY = 1e7;
	int n; cin >> n;

	cin >> x[0] >> y[0];
	maxX = max(x[0], maxX); maxY = max(y[0], maxY);
	minX = min(x[0], minX); minY = min(y[0], minY);

	for (int i = 1; i < n; ++i) {
		cin >> x[i] >> y[i];

		maxX = max(x[i], maxX); maxY = max(y[i], maxY);
		minX = min(x[i], minX); minY = min(y[i], minY);
		if(x[i - 1] == x[i])
			p += (long long) max(y[i - 1], y[i]) - min(y[i - 1], y[i]);
		else 
			p += (long long) max(x[i - 1], x[i]) - min(x[i - 1], x[i]);
	}

	if(x[0] == x[n - 1])
		p += (long long) max(y[0], y[n - 1]) - min(y[0], y[n - 1]);
	else 
		p += (long long) max(x[0], x[n - 1]) - min(x[0], x[n - 1]);

	cout << p - 2 * (maxX - minX) - 2 * (maxY - minY) << '\n'; 
	return 0;
}