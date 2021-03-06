#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
#define MAXN 400001
#define MOD 1000000007
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int>ii;
int N,a,b;
ll dia,ways,len[MAXN],cnt[MAXN];
vector<int>adj[MAXN];
bool vis[MAXN];
void dfs(int node){
    vis[node]=1;
    for(int neigh : adj[node]){
        if(!vis[neigh]){
            dfs(neigh);
            if(len[neigh]+len[node]+1>dia){
                ways = cnt[neigh] * cnt[node];
                dia = len[neigh] + len[node] + 1;
            } else if (len[neigh] + len[node]+1==dia){
                ways += cnt[neigh] * cnt[node];
            }
            if(len[neigh]+1==len[node]){
                cnt[node] += cnt[neigh];
            } else if (len[neigh]+1>len[node]){
                cnt[node] = cnt[neigh];
                len[node] = len[neigh]+1;
            }
        }
    }

}
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    // len[u] is longest path to leaf
    // cnt[u] is ways to do so
    cin>>N;
    for(int i = 1; i <= N; i++) cnt[i]=1;
    for(int i = 0; i < N-1; i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);
    cout<<dia+1<<" "<<ways;
    return 0;
}
