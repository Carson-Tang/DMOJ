#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
#define INFINITE 0x3f3f3f3f
#define MAXN 100001
#define MOD 1000000007
typedef long long ll;
typedef pair<int,int>ii;
int tc,n,k,w,psa[30005],dp[501][30005];
int solve(int rem, int idx){
    if(rem==0||idx>n) return 0;
    if(dp[rem][idx]!=-1) return dp[rem][idx];
    return dp[rem][idx] = max(solve(rem,idx+1),psa[min(n,idx+w-1)]-psa[idx-1]+solve(rem-1,idx+w));
}
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin>>tc;
    while(tc--){
        cin>>n>>k>>w;
        memset(psa,0,sizeof psa);
        memset(dp,-1,sizeof dp);
        for(int i = 1; i <= n; i++){
            int v; cin>>v;
            psa[i] = psa[i-1] + v;
        }
        cout<<solve(k,1)<<"\n";
    }
    return 0;
}
