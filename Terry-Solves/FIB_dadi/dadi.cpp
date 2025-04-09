#include <bits/stdc++.h>

using namespace std;

void solve(int t) {
    int K;
    cin >> K;
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int risposta = 42;
    
    for(int i=0; i<K; i++){
        if(A!=0){
            A--;
            D++;
        }else if(B!=0){
            B--;
            D++;
        }else if(C!=0){
            C--;
            D++;
        }
    }

    risposta=(A*1)+(B*2)+(C*3)+(D*4);

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
