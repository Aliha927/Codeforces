#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        long long n,m,k;
        cin>>n>>k>>m;
        if (k > m){
            cout<<"NO"<<endl;
            test_cases--;
            continue;
        }
        cout<<"YES"<<endl;
        for(int i = 0; i < n; i++){
            if (i%k == k-1){
                cout<<m - k + 1<< " ";
            }
            else  {
                cout<<1<< " "; 
            }
        }
        cout<<endl;

        test_cases--;
    }
}