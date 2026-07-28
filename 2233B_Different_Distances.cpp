#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases--){
        int n;
        cin>>n;
        if (n % 2 == 0){
            int i = 1;
            while (i <=n){
                cout<<i<<" "<<i+1<<" "<<i+1<<" "<<i<<" "<<i+1<<" "<<i<<" "<<i<<" "<<i+1<<" ";
                i+=2;
            }
        }
        else {
            
            cout<<"1 1 2 1 2 3 1 3 2 2 3 3"<<" ";
            int i = 4;
            while (i <=n){
                cout<<i<<" "<<i+1<<" "<<i+1<<" "<<i<<" "<<i+1<<" "<<i<<" "<<i<<" "<<i+1<<" ";
                i+=2;
            }
        }
    }
}