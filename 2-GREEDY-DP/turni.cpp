#include <bits/stdc++.h>
using namespace std;

// True = A, False = B
bool comp(pair<int, int> &a, pair<int, int> &b){
    if(a.first==b.first){
        return a.second>b.second;
    }else{
        return a.first<b.first;
    }
}

int main(){

    ifstream cin("input.txt");
	ofstream cout("output.txt");

    int N;
    int K;
    cin>>K>>N;

    vector<pair<int, int>> v(N);


    for(int i=0; i<N; i++){
        int a, b;
        cin>>a>>b;
        v[i].first=a;
        v[i].second=b;
    }

    sort(v.begin(), v.end(), comp);
    int ans=1;
    int fine = v[0].second;
    int index=0;

    while(index<N){
        if(fine == K-1){
            break;
        }
        ans++;
        int massimo = v[index].second;
        while(index<N && v[index].first<=fine+1){
            massimo = max(v[index].second, massimo);
            index++;
        }
        fine=massimo;
    }

    cout << ans;
}
