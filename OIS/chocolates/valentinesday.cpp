// NOTE: it is recommended to use this even if you don't understand the following code.

#include <bits/stdc++.h>

using namespace std;

int main() {
    // uncomment the two following lines if you want to read/write from files
     ifstream cin("input.txt");
     ofstream cout("output.txt");

    int N, M;
    cin >> N >> M;

    vector<int> C(N);
    for (int i = 0; i < N; ++i)
        cin >> C[i];

    vector<int> P(N);
    for (int i = 0; i < N; ++i)
        cin >> P[i];

    int maxChocolates = 0;


    // INSERT YOUR CODE HERE
	for(int i=0; i<N; i++){
		if(P[i]<=M && C[i]%2==0){
			maxChocolates = max(maxChocolates, C[i]);
		}
	}

    cout << maxChocolates << endl;

    return 0;
}
