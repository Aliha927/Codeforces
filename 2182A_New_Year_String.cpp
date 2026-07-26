#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        int n;
        cin>>n;
        string  s;
        cin>>s;
        int number_of_operations=  0;
        if (s.find("2026") == string::npos && s.find("2025") != string::npos){
            cout<<1<<endl;
        }
        else {
            cout<<0<<endl;
        }

        test_cases--;
    }
}