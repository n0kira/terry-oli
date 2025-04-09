#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve(int t) {
    int N;
    cin >> N;
    vector<int> S(N, 0);
    for(int i = 0; i < N; i++) cin >> S[i];

    // aggiungi codice...
    int risposta = 42;
    int count=0;
    int j=0;
    
    for(int i=0; i<N; i++){
        if(S[i]==0){
            count++;
        }

        while(count>1){
            if(S[j]==0){
                count--;
            }
            j++;
        }

        risposta=max(count, i-j+1);
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
