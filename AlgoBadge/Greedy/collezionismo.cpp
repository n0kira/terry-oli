#include <bits/stdc++.h>
using namespace std;

void solve(int t) {
    int N, K;
    // N, Modellini
    // K, Scaffali
    cin >> N; 
    cin >> K;

    cout << "PRESI N(" << N << ") e K(" << K << ")/";

    vector<int> C(N);
    cout << "CREATO VETTORE N(" << N << ")/";
    // for (int i = 0; i < N; i++) {
        
    // }

    int i=0;

    while(i<N){
        cout << "PRENDENDO VETTORE : ";
        cin >> C[i];
        cout << C[i] << " i(" << i << ")/" << endl;
        i++;
    }
    cout << "PRESO VETTORE/";

    // D , Differenza tra valore massimo e minimo dei modellini su uno scaffale
    // Risposta, somma di tutte le D di ogni scaffale (1x scaffale)
    sort(C.begin(), C.end());
    cout << "DOPO SORT/";

    vector<vector<int>> dp(K, vector<int>(N+1));
    dp[0][0] = 0;

    int D;

    for(int i = 0; i < K; i++){
        cout << "PRIMO FOR/";
        for(int j = 0; j < N; j++){
            cout << "SECODNO FOR/";
            for(int k = i - 1; k < i; k++){
                cout << "TERZO FOR/";
                D = C[j-1] - C[k];
                dp[i][j] = min(dp[i][j], dp[i-1][k] + D);
            }
        }
    }

    int risposta = dp[K][N];

    cout << "Case #" << t << ": " << risposta << "\n";
}

int main() {
    // se preferisci leggere e scrivere da file
    // ti basta decommentare le seguenti due righe:

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        solve(t);
    }

    return 0;
}
