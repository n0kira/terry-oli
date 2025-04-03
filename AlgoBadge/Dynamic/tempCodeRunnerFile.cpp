#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1000;
const int MAXM = 1000;

int solve() {

    // M turisti, M volontari (guide)
    int N, M;
    cin >> N >> M;

    int risposta = 0;  // memorizza qui la risposta
    vector<int> V(N), G(M);

    // preparazione turisti
    for (int i=0; i<N; i++) {
        cin >> V[i];
    }
    // preparazione guide
    for (int i=0; i<M; i++) {
        cin >> G[i];
    }

    // aggiungi codice...

    vector<int> A(M, 0);

    for(int i=0; i<N; i++){
        int ass=0;
        for(int j=0; j<M; j++){
            if(G[j] > V[i] && A[j]==0){
                ass=1;
                A[j]=1;
                break;
            }
        }

        if(ass){
            risposta+=2;
        }else{
            risposta++;
        }
    }

    return risposta;
}

int main() {
    // se preferisci leggere e scrivere da file
    // ti basta decommentare le seguenti due righe:

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T, t;
    cin >> T;

    for (t = 1; t <= T; t++) {
        cout << "Case #" << t << ": " << solve() << endl;
    }
}
