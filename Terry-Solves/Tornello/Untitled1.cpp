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
    }

    for(int i=0; i<N; i++){
        if(variazione.size()>=3){
            if(variazione[0]!=variazione[1] && variazione[0]==variazione[2]){
                risposta++;
                variazione.erase(variazione.begin(), variazione.begin()+3);
            }
        }else if(variazione.size()>=2){
            if(variazione[0]!=variazione[1]){
                risposta++;
            }
            variazione.erase(variazione.begin(), variazione.begin()+2);
        }else{
            risposta+=variazione[i];
        }
    }


    return risposta+S;
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
