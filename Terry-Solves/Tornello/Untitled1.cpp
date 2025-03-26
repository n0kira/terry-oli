#include <bits/stdc++.h>
using namespace std;

int solve() {
    int N;
    cin >> N;

    int risposta = 0;

    for (int i=0; i<N; i++) {
        vector<int> variazione;
        cin >> variazione;
    }
    
    for(int i=0; i<N; i++){
    	if(variazione[i+1]!=variazione[i]){
    		risposta++;
		}else if(variazione[i+2]==variazione[i] && variazione[i]!=variazione[i+1]){
			risposta++;
		}else{
			risposta+=variazione[i];
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