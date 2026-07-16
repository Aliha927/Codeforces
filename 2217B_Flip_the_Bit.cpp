#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
       int n, k;
        cin >> n >> k;          
        vector<int> a(n);
        for (int i = 0; i < n; ++i) 
            cin >> a[i];

        int p;
        cin >> p;                    
        int pidx = p - 1;          
        int x = a[pidx];             
        vector<int> b(n);
        for (int i = 0; i < n; ++i) 
            b[i] = (a[i] != x);


        int mL = 0;
        int prev = 0;
        for (int i = 0; i <= pidx - 1; ++i) {
            if (b[i] != prev) {
                ++mL;
                prev = b[i];
            }
        }
        int mR = 0;
        prev = 0;
        for (int i = n - 1; i >= pidx + 1; --i) {
            if (b[i] != prev) {
                ++mR;
                prev = b[i];
            }
        }

        int ans = max(mL, mR);
        if (ans % 2 == 1) 
            ++ans;

        cout << ans << '\n';
        test_cases--;
    }
}
