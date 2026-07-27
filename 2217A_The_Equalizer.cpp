#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr;
        int sum = 0;
        for(int i = 0; i <n ; i++){
            int element;
            cin>>element;
            arr.push_back(element);
            sum+=arr[i];
        }
        if (sum%2 == 1){
            cout<<"YES"<<endl;
        }
        else if ((sum + (k * n) - 1) % 2 == 1) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }
}