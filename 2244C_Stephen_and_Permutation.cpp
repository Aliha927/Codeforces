#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>arr;
        for(int i = 0; i < n; i++){
            int element = 0;
            cin>>element;
            arr.push_back(element);
        }
        bool f = true;
        int g  = __gcd(x,y);
        for(int i = 0; i < n; i++){
            if ((i+1) % g != arr[i] %g){
                f = false;
                break;
            }
        }
        if (f == false){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

        test_cases--;   
    }
}