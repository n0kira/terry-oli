#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ifstream cin("input.txt");
	ofstream cout("output.txt");

    char c='a';

    string S="Ciao a tutti"; // Vettore di caratteri

    cin >> S;   
    cout << S << endl;

    S[0]='C';
    S[4]='M';

    cout << S << endl;

    int posizione = S.find("Mondo");
    cout << posizione << endl;

    posizione = S.find("Olimpiadi");
    cout << posizione << endl;
    
    int N = S.size(); // O(lunghezza)
    cout << "La stringa è lunga " << N << endl;

    for (int i=0; i<S.size(); i++){
        // NO NO!!
        // usare N al posto di S.size()
    }

    // Partenza, Lunghezza substr
    string ciao = S.substr(0, 4);
    cout << ciao << endl;

    return 0;

}
