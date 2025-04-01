#include <bits/stdc++.h>
using namespace std;

int solve() {
    int N;
    cin >> N;

    int risposta = 0;
    vector<int> variazione(N);

    int S=0;

    for(int i=0; i<N; i++) {
        cin >> variazione[i];
        
        if(variazione[i]==1){
            S++;
            risposta=max(risposta, S);
        }else if(variazione[i]==-1){
            if(S>0){
                S--;
            }else{
                risposta++;
            }
        }
    }


    return risposta;
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
