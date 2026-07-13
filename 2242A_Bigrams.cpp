#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        int n = 0; 
        cin>>n;
        vector<int> arr;
        for(int i = 0; i < n; i++){
            int element = 0;
            cin>>element;
            arr.push_back(element);
        }
        bool f = false;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++){
            if (arr[i] == arr[i+1] && arr[i] != 1){
                cout<<"YES"<<endl;
                f = true;
                break;
            }
        }
        if (!f){
        for(int i = 0; i < n; i++){
            if (arr[i] > 2  && n >= 1 ){
                cout<<"YES"<<endl;
                f = true;
                break;
            }
        }}
        if (!f){
            cout<<"NO"<<endl;
        }
        test_cases--;
    }
}
