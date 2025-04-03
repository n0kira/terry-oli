#include <bits/stdc++.h>

using namespace std;

int knapsack(int W, int N, vector<int>&weights, vector<int>&values, vector<vector<int>>&memo){
    // Base case:
    if(W==0 || N==0){
        return 0;
    }

    // Gia calcolato:
    if(memo[N][W]!=-1){
        return memo[N][W];
    }

    // Se il peso dell'oggetto N supera quello massimo
    if(weights[N-1] > W){
        memo[N][W] = knapsack(W, N-1, weights, values, memo);
    } else {
        // include = ValoreOggetto + knapsack(PesoMax - PesoOggetto, Oggetto, Pesi, Valori, Memo)
        // proviamo ad includere l'oggetto N-1 nello zaino, quindi dobbiamo ridurre la capacitá da W a W-weights[N-1], poi chiamiamo ricorsivamente la funzione che fará la stessa cosa con i prossimi oggetti. Ottenuto il risultato dalla funzione, lo sommiamo al valore del nostro oggetto
        int include = values[N-1] + knapsack(W - weights[N-1], N-1, weights, values, memo);

        // exclude = knapsack(PesoMax, Oggetto, Pesi, Valori, Memo)
        // escludiamo l'oggetto N-1 dallo zaino, quindi la capacitá rimane W, e poi chimiamo ricorsivamente la funzione per sapere il valore massimo che posso ottenere ESCLUDENDO l'oggetto N-1 dallo zaino.
        int exclude = knapsack(W, N-1, weights, values, memo);

        // Confronto i due risultati ottenuti, e prendo il massimo, che sará il massimo valore che puó avere lo zaino con tutti gli oggetti senza superare il PesoMax. E il risultato del confronto sará salvato nella matrice Memo, in modo da sfruttare questo risultato se necessario nelle prossime chiamate ricorsive
        memo[N][W] = max(include, exclude);
    }

    return memo[N][W];

}

int main(){
    
    freopen("input-knap.txt", "r", stdin);
    freopen("output-knap.txt", "w", stdout);

    //~ DATI INPUT ~//

    int N; cin >> N; // oggetti
    int W; cin >> W; // peso max

    vector<int> weights(N); // peso del iesimo oggetto
    for(int i=0; i<N; i++){
        cin >> weights[i];
    }
    vector<int> values(N); // valore del iesimo oggetto
    for(int i=0; i<N; i++){
        cin >> values[i];
    }
    
    //£ RISOLUZIONE £//

    vector<vector<int>> memo(N+1, vector<int>(W+1, -1));

    cout << knapsack(W, N, weights, values, memo);

}
