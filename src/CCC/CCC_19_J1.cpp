#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
#define MAXN 100001
#define MOD 1000000007
#define f first
#define s second
typedef long long ll;
typedef pair<int,int>ii;
int a1,b1,c1,a2,b2,c2,tot1,tot2;
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin>>a1>>b1>>c1>>a2>>b2>>c2;
    tot1+=a1*3+b1*2+c1;
    tot2+=a2*3+b2*2+c2;
    if(tot1==tot2) cout<<"T\n";
    else if (tot1>tot2) cout<<"A\n";
    else cout<<"B\n";
    return 0;
}
