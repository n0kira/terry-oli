#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ifstream cin("input.txt");
	ofstream cout("output.txt");
	
	int N;
	cin >> N;
	
	int massimo = -1e9; // -1*10^9
	
	vector<int> V(N);
	
	for(int i=0; i<N; i++){
		cin >> V[i];
		if(V[i]>massimo){
			massimo=V[i];
		}
	}

	// Aggiungo numero alla fine
	V.push_back(3); // O(1)

	cout << V.back() << endl;

	// Tolgo l'ultimo numero
	cout << "Dimensione: " << V.size() << endl;
	V.pop_back(); // O(1)
	cout << "Dimensione: " <<  V.size() << endl;
	
	// cout << massimo << endl;

	N = V.size(); // O(1)
	cout << V[N-1] << endl; // V[V.size()-1];

	V.resize(5); // O(N)

	for(int i=0; i<V.size(); i++){
		cout << V[i] << " ";
	}

	cout << endl;
	
	V.resize(10); // O(N)

	for(int i=0; i<V.size(); i++){
		cout << V[i] << " ";
	}

	cout << endl;
	
}
