#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        long long a,b,x;
        cin>>a>>b>>x;
        if (a < b){
            long long temp = a;
            a = b;
            b = temp;
        }
        long long ans = a - b;
        long long count = 0;

        // now we see the second condition
        while (true){
            if (a < b){
                long long temp = a;
                a = b;
                b = temp;
            }
            ans = min(ans, count + (a-b));
            if (a == b){
                break;
            }
            if (a == 0 || x == 1){
                break;
            }

            a = a / x;
            count++;
           
        }
       
        cout<<ans<<endl;
        test_cases--;
    }
}