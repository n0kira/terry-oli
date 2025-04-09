#include <bits/stdc++.h>
using namespace std;

int compra(int N, int M, int A, int B) {
    // Mettete qui il codice della soluzione
    // N viaggi, M viaggi carnet, A costo 1, B costo carnet

    int costo_A=N*A; // costo biglietti singoli
    
    int costo_B=(N/M)*B; // costo carnet interi
    int costo_A_B=(N%M)*A; // costo biglietti da aggiungere ai carnet

    int costo_mix=costo_B+costo_A_B; // costo carnet interi + biglietti singoli
    int costo_soloB=(N/M+1)*B; // costo solo carnet anche se con corse in piu    

    return min({costo_A, costo_mix, costo_soloB});
}

int main() {
    FILE *fr, *fw;
    int N, M, A, B;

    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");

    assert(4 == fscanf(fr, "%d%d%d%d", &N, &M, &A, &B));

    fprintf(fw, "%d\n", compra(N, M, A, B));
    fclose(fr);
    fclose(fw);
    return 0;
}
