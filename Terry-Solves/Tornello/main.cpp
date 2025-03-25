#include <bits/stdc++.h>
using namespace std;

int solve() {
    int N;
    cin >> N;

    int risposta = 0;
    int S = 0;

    for (int i=0; i<N; i++) {
        int variazione;
        cin >> variazione;

        // aggiungi codice...
        risposta+=variazione;
        
    }
    
    if(N%2==0){
        risposta++;
    }
    

    return abs(risposta);
}

int main() {

    freopen("tornello_input_1.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        cout << "Case #" << t << ": " << solve() << endl;
    }
}
