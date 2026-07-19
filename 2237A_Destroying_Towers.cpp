#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        // first apprroach 
        int n;
        cin>>n;
        vector<int>arr;
        for(int i = 0; i < n; i++){
            int element;
            cin>>element;
            arr.push_back(element);
        }
        // int sum = 0;
        // for(int i = 0; i <n-1; i++){
        //     if (arr[i] < arr[i+1]){
        //         arr[i+1] = arr[i];
        //     }
        //     sum+=arr[i];
        // }
        // if (arr[n-2] < arr[n-1]){
        //         arr[n-1] = arr[n-2];
        // }
        // sum+=arr[n-1];
        //cout<<sum<<endl;

        ///second approach
        int sum = arr[0];
        for(int i = 0; i < n-1; i++){
            sum+=min(arr[i], arr[i+1]);
            if (arr[i] < arr[i+1]){
                arr[i+1] = arr[i];
            }
        }
        cout<<sum<<endl;
        test_cases--;

        // third approach 
        // int n;
        // cin>>n;
        // int x = 1000, y = 0;
        // for(int i = 0; i < n ; i++){
        //     int element =  0;
        //     cin>>element; 
        //     x = min(x, element);
        //     y+=x;
        // }
        // cout<<y<<endl;
        // test_cases--;
    }
}
