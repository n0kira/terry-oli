#include <bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int N;
    cin>>N;
    vector<int> w(N);
    for(int i=0; i<N; i++){
        cin>>w[i];
    }
    vector<int> dp(N);
    for(int i=0; i<N; i++){
        int maxpanini=1;
        for(int j=0; j<i; j++){
            if(w[j]>w[i]){
                if(dp[j]+1>maxpanini){
                    maxpanini=dp[j]+1;
                }
            }
        }
        dp[i]=maxpanini;
    }
    int ans=0;
    for(int i=0; i<N; i++){
        if(dp[i]>ans){
            ans=max(ans, dp[i]);
        }
    }
    cout << ans;
}
