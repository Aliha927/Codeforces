#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        long long n,k;
        cin>>n>>k;
        long long ans = 0, sum = 0;
        long long pow = 0;
        while (true){

            sum = (1LL << pow) * k;
            if (sum <= n){
                ans+= k;
                n-=sum;
                pow++;
            }
            else {
                ans+= n/(1LL<<pow);
                break;
            }
        }
        cout<<ans<<endl;
        test_cases--;
    }
}
/*
pow=0: block_size = 5*1 = 5   → fits → ans += 5 (total: 5),  n = 95
pow=1: block_size = 5*2 = 10  → fits → ans += 5 (total: 10), n = 85
pow=2: block_size = 5*4 = 20  → fits → ans += 5 (total: 15), n = 65
pow=3: block_size = 5*8 = 40  → fits → ans += 5 (total: 20), n = 25
pow=4: block_size = 5*16 = 80 → doesn't fit → ans += 25/16 = 1, break
*/