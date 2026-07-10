#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> arr;
        for(int i=0; i < n; i++){
            if (s[i] == '1'){
                arr.push_back(i);
            }
        }
        if (arr.size() == 0){
            cout<<"YES"<<endl;
            continue;
        }
        bool f = true;
        for(int i =0;i <= n-k; i++){
            int lb = i;
            int ub = i + k;
            if (s[lb] == '1'){
                s[lb] = '0';
            }
            else {
                s[lb] = '1';
            }
            if (s[ub] == '1'){
                s[ub] = '0';
            }
            else {
                s[ub] = '1';
            }
            for (int m = lb + 1; m < ub; m++ ){
                if (s[m] == '1'){
                    cout<<"NO"<<endl;
                    f = false;
                    break;
                }
                m = ub;
            }
        }
        if (f == true){
            if (k >= n){
                cout<<"NO"<<endl;

            }
            else {
                cout<<"YES"<<endl;
            }
        }
        test_cases--;
    }
}
