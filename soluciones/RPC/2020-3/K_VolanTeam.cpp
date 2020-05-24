#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m;
	cin >> n >> m;

	char a[n + 1], b[m + 1], res[m + 1];
	cin >> a >> b;

	res[m] = 0;

	for (int i = 0; i < n; ++i)
	{
		res[m - i - 1] = a[n - i - 1];
	}	

	for (int i = m - n - 1; i >= 0; --i)
	{
		res[i] = (char) (((26 + (((b[i + n]) - 'a') - ((res[n + i]) - 'a'))) % 26) + 'a');
	}

	cout << res << '\n';
	return 0;
}