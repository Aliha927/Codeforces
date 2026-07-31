#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        for(int i = 0; i < n; i++){
            int element;
            cin>>element;
            arr.push_back(element);
        }
        int l, r;
        for(int i = 0; i< n; i++){
            if (arr[i] == 1){
                l = i;
                break;
            }
        }
        for(int i = n-1; i >=0; i--){
            if (arr[i] == 1){
                r = i;
                break;
            }
        }
        int count = 0;
        if (l < r){
        for(int i = l; i < r; i++){
            if (arr[i] == 0){
                count++;
            }
        }}
        cout<<count<<endl;

    }
}