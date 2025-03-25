#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ifstream cin("input.txt");
	ofstream cout("output.txt");

    int N; cin >> N;
    vector<int> A(N);

    // scorre su tutta la struttura. con & uso gli elementi stessi del vettore, non una copia
    for (int &a : A){
        cin >> a;
    }

    for (int i=0; i<N; i++){
        cout << A[i] << ' ';
    }
    cout << endl;

    // per sortare, no bubble sort!
    // gli altri sort vanno in: O(N logN)
    // ordina da inizio a fine
    sort(A.begin(), A.end()); // O(NlogN)

    for (int i=0; i<N; i++){
        cout << A[i] << ' ';
    }
    cout << endl;

    reverse(A.begin(), A.end()); // O(N)

    for (int i=0; i<N; i++){
        cout << A[i] << ' ';
    }
    cout << endl;

    // Alternativa del reverse:

    sort(A.rbegin(), A.rend());

    for (int i=0; i<N; i++){
        cout << A[i] << ' ';
    }
    cout << endl;

    
    cout << "Vector di vector ordinati per grandezza: " << endl;
    vector<vector<int>> V = {
        {1},
        {1, 2, 3},
        {4, 5}
    };

    // usando una lambda, funzione senza nome
    sort(V.begin(), V.end(), [](auto a, auto b){
        return a.size() < b.size();
    });

    for(auto sublist : V){
        for(auto x : sublist){
            cout << x << ' ';
        }
        cout << endl;
    }


    return 0;

}
