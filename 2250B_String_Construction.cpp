#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases--){
        int n,k;
        cin>>n>>k;
        int r = n - k;
        int zeros = (n+1) /2;
        int ones = (n)/2;
        int temp_zeroes = 0;
        int temp_ones=  0;
        string s[r];
        for(int i = 0; i <r; i++){
            if (i%2 == 0){
                s[i] = '0';
                temp_zeroes++;
            }
            else {
                s[i] = '1';
                temp_ones++;
            }
        }
        int diff_zeroes = zeros - temp_zeroes;
        int diff_ones = ones - temp_ones;
        if (r == 1){
            cout<<-1<<endl;
            continue;
        }
        string sz, so;
        for(int i = 0; i < diff_zeroes; i++){
            sz = sz + '0';
        }
        for(int i = 0; i < diff_ones; i++){
            so = so + '1';
        }
        s[0] = s[0] + sz;
        s[1] = s[1] + so;
     
        for(int i =0 ;i < r; i++){
            cout<<s[i];
        }
        cout<<endl;
    }
}