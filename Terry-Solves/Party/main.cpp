#include <bits/stdc++.h> 
using namespace std;

int main(){

    ifstream cin("party_input_1.txt");
    ofstream cout("output.txt");

    int T; cin >> T;

  

    for(int i=1; i<=T; i++){
        int N; cin >> N;
        int risposta=0;
        
        for(int j=0; j<N; j++){
            int A; cin >> A;
            if(A>=0){
                risposta+=A;
            }
        }

        cout << "Case #" << i << ": " << risposta << endl;
    }

    return 0;
}
