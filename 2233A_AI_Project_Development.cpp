#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases--){
        int n,x,y,z;
        cin>>n>>x>>y>>z;
        int i = 0;
        int sum = 0;
        while (sum < n){
            sum = sum +x + y;
            i++;
        }
        int Second_sum = 0;
        Second_sum = Second_sum + (z*x);
        int j = 0;
        while(Second_sum < n){
            Second_sum = Second_sum + (y*10) + x;
            j++;
        }
        j+=z;
        if (i < j){
            cout<<i<<endl;
        }
        else {
            cout<<j<<endl;
        }
    }
}