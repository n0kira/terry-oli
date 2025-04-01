#include <bits/stdc++.h>
using namespace std;

//~ Difficile, usare la iterativa

vector<long long int> v(10000);

// int f(int x){ // complessità O(2^x)
//     if(x<=2)
//         return 1; 
//     else
//         return f(x-1)+f(x-2);
// }

long long int f(long long int x){ // complessità O(N)
    if(v[x]!=0){
        return v[x];
    }
    if(x<=2){
        v[x]=1;
        return 1;
    } else {
        v[x]=f(x-1)+f(x-2);
        return v[x];
    } 
}
    
int main(){
    long long int res = f(50);
    cout << res;
}
