#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ifstream cin("input.txt");
	ofstream cout("output.txt");

    // queue - "Coda" "Struttura di tipo F.I.F.O, first in, first out. Le operazioni di aggiunta e rimozione hanno O(1)
    
    queue<int> Q;
    Q.push(10);
    Q.push(20);
    Q.push(30);
    // Q = 10 20 30
    
    cout << Q.front() << endl;

    Q.pop(); // Toglie l'elemento da vanti
    cout << Q.front() << endl;

    cout << "Dimensione: " << Q.size() << endl;

    Q.pop();
    Q.pop();

    // Empty è comune a tutte le strutture. Ritorna True se vuoto, false se non vuoto
    if(Q.empty()){
        cout << "La coda è vuota." << endl;
    }else{
        cout << "La coda non è vuota." << endl;
    }


    // stack - "Pila" Struttura di tipo L.I.F.O, last in, first out. Le operazioni di aggiunta e rimozione hanno O(1)
    stack<int> S;
    S.push(10);
    S.push(20);
    S.push(30);
    S.push(40);
    S.push(50);
    
    cout << S.top() << endl;

    S.pop();
    cout << S.top() << endl;

    cout << "Dimensione: " << S.size() << endl;

    S.pop();

    // Empty è comune a tutte le strutture. Ritorna True se vuoto, false se non vuoto
    if(S.empty()){
        cout << "Lo stack è vuoto." << endl;
    }else{
        cout << "Lo stack non è vuoto." << endl;
    }
    // deque - "Stack + queue" Struttra dove posso aggiungere e rimovere sia dall'inizio che dalla fine

    deque<int> DQ;
    DQ.push_back(10);
    DQ.push_front(20);

    cout << DQ.front() << endl;
    cout << DQ.back() << endl;

    cout << "Dimensione: " << DQ.size() << endl;

    // Solo con la deque
    cout << "L'elemento in posizione 1: " << DQ[1] << endl;

    DQ.pop_back();
    DQ.pop_front();

    if(DQ.empty()){
        cout << "La deque è vuota." << endl;
    }else {
        cout << "La deque non è vuota." << endl;
    }


    // Priority queue
    priority_queue<int> PQ;
    PQ.push(10); // O(logN)
    PQ.push(20);
    PQ.push(30);

    // Assicura che il top element sia il maggiore, ma non ordina gli altri
    cout << PQ.top() << endl;

    Q.pop(); // O(logN)
    cout << PQ.top() << endl; // O(1)

    cout << "Dimensione: " << Q.size() << endl;

    PQ.pop();
    PQ.pop();

    // Empty è comune a tutte le strutture. Ritorna True se vuoto, false se non vuoto
    if(PQ.empty()){
        cout << "La coda è vuota." << endl;
    }else{
        cout << "La coda non è vuota." << endl;
    }


    // Set (insieme)

    int N;
    cin >> N;

    set<int> ST;
    for(int i=0; i<N; i++){
        int x;
        cin >> x;
        ST.insert(x); // O(logN)
    }

    cout << ST.size() << endl; // 7 -> non conta i doppioni

    ST.erase(7); // O(logN)

    cout << ST.size() << endl;

    for(auto x : ST){
        cout << x << ' ';
    }
    cout << endl;

    cout << *ST.begin() << endl; // Elemento piu piccolo

    ST.erase(ST.begin()); // Tolgo elemento piccolo


    // lower_bound -> iteratore al primo elemento > x (4)
    cout << *ST.lower_bound(4) << endl;

    return 0;

}
