#include <bits/stdc++.h>
using namespace std;

int main(){

    int ans=0;

    int N; cin >> N;
    vector<int> S(N);
    for(int i=0; i<N; i++){
        cin >> S[i];
    }

    int C;

    do{
        C=0;
                
        for(int i=0; i<N; i++){
            if((S[i]%2)==0){
                C++;
            }else{
                break;
            }
        }

        if(C==N){
            ans++;
            for(int j=0; j<N; j++){
                S[j]/=2;
            }
        }

    }while(C==N);

    cout << ans << endl;

    return 0;
}
