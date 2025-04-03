#include <bits/stdc++.h>

using namespace std;

int fib(int N, vector<int>&memo){
    if(memo[N]!= -1){
        return memo[N];
    }

    if(N <= 1){
        return N;
    }

    memo[N] = fib(N-1, memo)+fib(N-2, memo);
    return memo[N];
}

int main(){

    int N;

    cout << "Inserisci quale numero di fibonacci calcolare: ";
    cin >> N;
    
    vector<int> memo(N+1, -1);

    int R = fib(N, memo);

    cout << "Fibonacci = " << R << " :) " << endl;

    return 0;

}
