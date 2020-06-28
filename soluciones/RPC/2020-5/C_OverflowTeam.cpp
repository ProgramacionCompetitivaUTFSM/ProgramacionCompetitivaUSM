#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;

using namespace std;

int main(){

	int R, C, A, B;

	cin >> R >> C >> A >> B;

	int As[A];
	int Bs[B];

	for (int i = 0; i < A; ++i)
	{
		cin >> As[i];
	}

	for (int i = 0; i < B; ++i)
	{
		cin >> Bs[i];
	}


	int cA = 0;
	int cB = 0;

	bool first = false;// B
	bool second = true;// W
	bool third = false;

	for (int i = 0; i < A; ++i)
	{
		int c = As[i];

		if (first){
			first = false;
		}else{
			first = true;
		}

		for (int j = 0; j < c; ++j)
		{
			second = first;
			for (int k = 0; k < B; ++k)
			{	
				int d = Bs[k];
				
				
				if (second){
					second = false;
				}else{
					second = true;
				}


				for (int l = 0; l < d; ++l)
				{
					if(second){
						cout << "W";
					}else{
						cout << "B";
					}
					
				}


				
			} 
			cout << endl;
		}

		
	}

	return 0;
}