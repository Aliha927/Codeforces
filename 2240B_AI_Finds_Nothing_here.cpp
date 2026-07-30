#include<bits/stdc++.h>
using namespace std;


const long long MOD = 998244353;
long long power(long long a, long long b){

    long long res = 1;
    a = a%MOD;
    while (b > 0){
        if (b%2==1){
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b = b / 2;

    }
    return res;
}
int main(){
    
    int t;
    cin>>t;
    while(t--){
        long long n,m,r,c;
        cin>>n>>m>>r>>c;
        long long val = n*m - (n - r + 1) * (m - c + 1);
        cout<<power(2, val)<<endl;;
    }


}
