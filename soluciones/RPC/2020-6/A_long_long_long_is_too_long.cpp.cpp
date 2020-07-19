#include <bits/stdc++.h>

using namespace std;

int main () {
	string s; cin >> s;
	char end = s[s.size()-1];
	int n; cin >> n;
	vector <string> words (n);
	int starts[26] = {};
	for (int i = 0; i < n; i++) {
		cin >> words[i];
		starts[words[i][0] - 'a']++;
	}
	for (auto i : words) {
		if (i[0] != end)
			continue;
		if (starts[i[i.size()-1] - 'a'] == 0 or (starts[i[i.size()-1] - 'a'] == 1 and i[0] == i[i.size()-1])) {
			cout << i << "!\n";
			return 0;
		}
	}
	for (auto i : words) {
		if (i[0] == end){
			cout << i << "\n";
			return 0;
		}
	}
	cout << "?\n";
	return 0;
}