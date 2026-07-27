#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(long long n) {
    string s = to_string(n);
    return s == string(s.rbegin(), s.rend());
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long r = n % 12;

        if (n == 10){
            cout<<-1<<endl;
        }
        else if (r == 10){
            cout<<22<<" "<<n-22<<endl;;
        }
        else {
            cout<<r<<" "<<n-r<<endl;;
        }
        
    }
}