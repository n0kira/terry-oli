#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int N, M;
    cin >> N >> M;

    vector<vector<int>> adj(N);

    for(int i=0; i<M; i++){
        int a,b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    // GRAFO PESATO
    // vector<vector<pair<int, int>>> adj(N);

    // for(int i=0; i<M; i++){
    //     int a, b,w;
    //     cin >> a >> b >> w;

    //     adj[a].push_back({b, w});
    //     adj[b].push_back({a, w}); // solo se bidirezionale questa

    // }

    // stampo i vicini di 3
    cout << "Vicini di 3: ";
    for(auto i: adj[3]){
        cout << i << ' ';
    }
    cout << endl;

}
