#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<long long>arr;
        for(int i =0; i< n; i++){
            long long element;
            cin>>element;
            arr.push_back(element);
        }
        sort(arr.begin(), arr.end(), greater<long long>());
        bool f = true;
        if (arr.size() <= 2){
            cout<<arr[0]<<" "<<arr[1]<<endl;
            continue;
        }
        for(int i = 0; i < n-2; i++){
            if (arr[i+2] != arr[i] % arr[i+1]){
                f = false;
                break;
            }

        }
        if (f==true){
            cout<<arr[0]<<" "<<arr[1]<<endl;
        }
        else {
            cout<<-1<<endl;;
        }

    }

}