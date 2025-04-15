#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve(int t) {
    int N;
    cin >> N;

    vector<int> W(N);
    for (int i = 0; i < N; i++) {
        cin >> W[i];
    }

    // aggiungi codice...
    int maxK = 1e9, minK = 0;

    int LR=-1;
    for(int i=0; i<N; i++){
        if(W[i]!=-1){
            LR+=W[i]+1;
        }else{
            if(i!=N-1){
                int maxLR = LR + 1 + W[i+1] - 1;
                if(maxLR<maxK){
                    maxK=maxLR;
                }
            }
            LR=-1;
        }
        if(LR>minK){
            minK=LR;
        }
    }


    cout << "Case #" << t << ": " << minK << " " << maxK << "\n";
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
