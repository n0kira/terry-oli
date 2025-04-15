#include <bits/stdc++.h>
using namespace std;

bool visitabili(vector<pair<int, int>> pts){
    sort(pts.begin(), pts.end());

    for(int i=1; i<pts.size(); i++){
        if(pts[i-1].second > pts[i].second){
            return false;
        }
    }
    return true;
}

void solve(int t) {
    int N;
    cin >> N;

    vector<pair<int, int>> pts(N);
    for(int i = 0; i < N; ++i) {
        cin >> pts[i].first >> pts[i].second;
    }

    int risposta = 0;

    // aggiungi codice..
    int l=0, r=N-1;
    // intervallo in cui cerco il massimo prefisso visitabile incluso/incluso

    while(r>l){
        int mid=(l+r+1)/2;
        vector<pair<int, int>> prefisso;
        for(int j=0; j<=mid; j++){
            prefisso.push_back(pts[j]);
        }
        if(visitabili(prefisso)==true) l = mid;
        else r = mid-1;
    }

    risposta=l+1;

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
