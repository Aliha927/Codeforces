#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        int n;
        cin>>n;
        vector<long long>arr;
        for(int i = 0; i < n; i++){
            long long element;
            cin>>element;
            arr.push_back(element);
        }
        long long i = 0;
        bool f = false;
        while (i < n-1){
            long long number = arr[i];
            long long sub = number - (i + 1);
            if (arr[i] == i+1){
                i++;
                continue;
            }
            if (arr[i] < i+1){
                cout<<"NO"<<endl;
                f = true;
                break;
            }
            arr[i] = i+1;
            long long add = sub + arr[i+1];
            arr[i+1] = add;
            if (i+1 >= n && arr[i] < arr[i+1]){
                cout<<"YES"<<endl;
                f = true;
                break;
            }
            i++;
        }
        if (f == false){
        if (arr[n-1] < n){
            cout<<"NO"<<endl;
            f = true;
        }
        else 
            cout<<"YES"<<endl;
        }
        test_cases--;   
    }
}