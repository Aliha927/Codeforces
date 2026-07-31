#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;
        int size = s.size();
        int arr[4] = {10,1,3,6};
        int first_char = s[0] - '0';
        cout<<10 * (first_char -1) + arr[(size % 4)]<<endl;;
        //BETTER WAY 
        //cout<<10*(first_char-1) + ((size * (size+1)) / 2)<<endl;;
    }
}