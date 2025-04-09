// NOTA: si raccomanda di usare questo template anche se non lo si capisce completamente.

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // decommenta le due righe seguenti se vuoi leggere/scrivere da file
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int T;
    cin >> T;
    for (int test = 1; test <= T; ++test) {
        long long N;
        cin >> N;

        int operazioni = 1;

        // INSERISCI IL TUO CODICE QUI
        while(N>2){
            if (N%2!=0){
                N++;
            }else{
                N/=2;  
            } 
            operazioni++;
        }


        cout << "Case #" << test << ": ";
        cout << operazioni << endl;
    }

    return 0;
}
