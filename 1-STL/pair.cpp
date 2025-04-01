#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ifstream cin("input.txt");
	ofstream cout("output.txt");

    int N;
    cin >> N;

    // Dichiaro un pair
    pair<int, int> P;

    P.first = 5;
    P.second = 10;

    cout << P.first << " " << P.second << endl;

    vector<pair<int, int>> Punti(N);

    for(int i=0; i<N; i++){
        cin >> Punti[i].first >> Punti[i].second;
    }

    cout << Punti[3].first << ' ' << Punti[3].second << endl;

    return 0;

}
