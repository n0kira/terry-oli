#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve(int t) {
    int N, Q;
    cin >> N >> Q;
    int risposta=0;
    for(int i = 0; i < Q; i++) {
        int L; cin >> L;
        risposta++;
        if(risposta > N-L+1) risposta = N-L+1;
    }


    cout << "Case #" << t << ": " << risposta << endl;
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
