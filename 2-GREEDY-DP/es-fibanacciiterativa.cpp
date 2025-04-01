#include <bits/stdc++.h>
using namespace std;
vector<long long int> v(1000);

int main(){
    v[1] = 1;
    v[2] = 1;

    for(int i=3; i<=100; i++){
        v[i] = v[i-1]+v[i-2];
    }

    cout << v[50];
}
