#include <iostream>
#include <vector>
using namespace std;

void solve(int t){
    int N;
    cin >> N;
    vector<int> I(N), F(N);
    for(auto &x: I)cin >> x;
    for(auto &x: F)cin >> x;

    int risposta = 0;

    // aggiungi codice..
    for(int i=0; i<N; i++){
        if(I[i]!=F[i])risposta++;
    }

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
