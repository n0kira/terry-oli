#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, Wmax;
    cin >> N >> Wmax;
    vector<int> W(N);
    vector<int> C(N);
    vector<vector<int>> dp(N, vector<int> (Wmax+1));
    for(int i = 0; i < N; i++){
        cin >> W[i];
    }

    for( int i = 0; i < N; i++ ){
        cin >> C[i];
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j <= Wmax; j++) {
            if(i > 0) {
                // La risposta puo essere non rendere l'iesimo oggetto e considerare solo i primi i-1 oggetti
                dp[i][j] = max(dp[i][j], dp[i-1][j]);
            }
            if(j-W[i] >= 0) {
                // la risposta puo essere prendere  l'iesimo oggetto -> al peso totale j sottraggo W[i] e aggiungo C[i] alla risposta
                if( i > 0 ) {
                    dp[i][j] = max(dp[i][j], dp[i-1][j-W[i]] + C[i]);
                } else {
                    dp[i][j] = max(dp[i][j], C[i]);
                }
            }
        }
    }
    cout << dp[N-1][Wmax];
}
