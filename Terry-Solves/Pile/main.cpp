#include <bits/stdc++.h>
using namespace std;

void solve(int t) {
    int N;
    cin >> N;

    vector<int> A(N), B(N), C(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i] >> C[i];
    }

    int S=0;

    for(int i=0; i<N; i++){
        int H = max({A[i], B[i], C[i]});
        S+=H;
    }

	int risposta=S;

    cout << "Case #" << t << ": " << risposta << endl;
}

int main() {

    freopen("pile_input_1.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T;
    cin >> T;

    for(int t = 1; t <= T; t++) {
        solve(t);
    }
}
