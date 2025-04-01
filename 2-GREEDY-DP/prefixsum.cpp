#include <bits/stdc++.h>
using namespace std;
vector<int> v;
vector<int> prefix;

int sum(int a, int b) {
    // int res = 0;
    // for(int i = a; i <= b; i++) {
    //     res+=v[i];
    // }
    // return res;

    int res = prefix[a] - prefix[b];

    return res;
}

int main() {
    int N;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> v[i];
    }
    prefix.resize(N + 1);
    // prefix[i] = somma dei numeri da 0 a i in v
    for(int i = 0; i <= N; i++) {
        prefix[i] = prefix[i - 1] + v[i];
    }
}
