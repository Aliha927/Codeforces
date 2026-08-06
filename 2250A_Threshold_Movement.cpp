#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        long long L = int64_t(-1e18), R = int64_t(1e18);
        for(int i = 0; i < n; i++){
            long long x;
            cin >> x;
            if (i % 2  == 1){
                L = max(x, L);
            }
            else {
                R = min(x, R);
            }
        }
        if (n%2 == 0 && L+2<= R){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;

        }
    }
}