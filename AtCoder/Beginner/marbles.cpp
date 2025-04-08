#include <bits/stdc++.h>
using namespace std;

int main(){

    int ans=0;

    string N;
    cin >> N;
    for(int i=0; i<3; i++){
        if(N[i]=='1'){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
