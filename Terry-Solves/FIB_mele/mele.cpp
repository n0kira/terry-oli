#include <iostream>
#include <vector>

using namespace std;

void solve(int t) {
    int N, M, C;
    cin >> N >> M >> C;

    int risposta;
    if(N*M > C){
        risposta = C;
    }else{
        risposta = N*M;
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
