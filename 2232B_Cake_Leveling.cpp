#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        int n;
        cin>>n;
        vector<long long>arr;
        for(int i = 0; i < n ; i++){
            long long element;
            cin>>element;
            arr.push_back(element);
        }
        long long sum = 0;
        long long mini = LLONG_MAX;
        for(int i = 0; i <n ; i++){
            sum+=arr[i];
            long long avg = 0;
            avg = sum/(i+1);
            mini = min(mini, avg);
            cout<<mini<<" ";
        }
        cout<<endl;
        test_cases--;
    }
}