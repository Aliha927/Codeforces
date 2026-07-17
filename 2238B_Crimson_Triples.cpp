#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;
    while (test_cases > 0){
        long long n;
        cin>>n;
        long long ans = 0;
        for(int i = 1; i <= n; i++){
            ans+= pow(n/i, 2);
        }
        cout<<ans<<endl;

        test_cases--;
    }
}