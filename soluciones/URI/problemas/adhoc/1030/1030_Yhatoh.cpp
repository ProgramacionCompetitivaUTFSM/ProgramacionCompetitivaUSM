#include<bits/stdc++.h>

using namespace std;
typedef map< int, vector <int> > graph;

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.setf(ios::fixed);
	cout.precision(4);
    int a,b,c,d,e,f,g,h,i;
    cin >> a;
    b = 0;
    while(b < a){
        cin >> c >> d;
        vector<int> personas;
        for(i = 0; i < c; i++){
            personas.push_back(i+1);
        }
        h = 0;
        while(personas.size() != 1){
            h = (h+d-1)%c;
            //for(i = 0; i < c; i++) cout << i << ": " << personas[i] << "|";
            //cout << "\n"; 
            personas.erase(personas.begin()+h);
            c = personas.size();
            h = h%c;
            //for(i = 0; i < c; i++) cout << i << ": " << personas[i] << "|";
            //cout << "\n";
        }
        cout << "Case " << b+1 << ": " << personas[0] << "\n";
        b++;
    }
    return 0;
}