#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        int n;
        cin>>n;
        vector<int>arr;
        for(int i= 0;i  < n; i++){
            int element;
            cin>>element;
            arr.push_back(element);
        }
        int max = arr[0];
        int min = arr[0];
        for(int i = 0; i < n; i++){
            if (arr[i] > max){
                max = arr[i];
            }
            if (arr[i] < min){
                min = arr[i];
            }
        }
       
        int target = max + 1;
        cout<<target - min<<endl;
        test_cases--;
    }
}