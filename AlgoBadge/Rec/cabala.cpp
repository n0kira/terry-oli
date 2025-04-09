#include <bits/stdc++.h>
using namespace std;

long long occulta(int N, int M) {
    // Mettete qui il codice della soluzione
    
    /*
        C ha al massimo N cifre
        Tutte le cifre sono multipli di 3, e non possono essere 0
        Non ci sono 2 cifre uguali vicine
        C % M deve avere il resto piu grande tra tutti i numeri che rispettano le altre condizioni
    */
    
    // Soluzione
    bho

    return 32;
}


int main() {
    FILE *fr, *fw;
    int T, N, M, i;

    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");
    assert(1 == fscanf(fr, "%d", &T));
    for (i=0; i<T; i++) {
        assert(2 == fscanf(fr, "%d %d", &N, &M));
        fprintf(fw, "%d ", occulta(N, M));
    }

    fprintf(fw, "\n");
    fclose(fr);
    fclose(fw);
    return 0;
}
