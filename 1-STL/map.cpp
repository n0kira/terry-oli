#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ifstream cin("input.txt");
	ofstream cout("output.txt");

    map<int, int> mappa;

    mappa[70] = 120; // O(log[N-Elem])
    mappa[30] = 42;
    mappa[1] = 205387;

    cout << mappa[70] << endl;
    cout << mappa[30] << endl;

    cout << "La grandezza della mappa è: " << mappa.size() << endl;

    map<string, string> Materie;

    Materie["Storia"] = "Prof. Verdi";
    Materie["Italiano"] = "Prof. Rossi";
    Materie["Matematica"] = "Prof. Baglietto";
    

    cout << Materie["Matematica"] << endl;


    cout << "Tutte le coppie chiave, valore: " << endl;
    // Auto identifica automaticamente il tipo di dato da usare
    for(auto [chiave, valore] : Materie){
        // Sono stampati in ordine di chiave, in questo caso (lessicografico)
        cout << chiave << ": " << valore << endl;
    }

    // !!!NON USARE!!!
    // Variante non ordinata
    // unordered_map<int, int> UM;
    // UM[10000] = 10; // O(1)

    return 0;

}
