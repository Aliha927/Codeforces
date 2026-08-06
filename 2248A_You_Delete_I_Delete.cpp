#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;
    while (test_cases--){
        string s;
        cin>>s;
        bool f = false;
        for(int i =0 ;i < s.size(); i++){
            if (s[i] == '0'){
                s.replace(i,1,"");
                f = true;
                i--; 
                break;
            }
        }
        if (f ==  true){
        for(int i =0 ;i < s.size(); i++){
            if (s[i] == '1'){
                s.replace(i,1,"");
                i--; 
                break;
            }
        }
        cout<<s<<endl;;
    }
}}