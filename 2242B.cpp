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
        sort(arr.begin(), arr.end());
         int arr_count[3] = {0};
        for(int i = 0; i < n ; i++){
                arr_count[arr[i] - 1]++;
        }
        
        if ((arr_count[0] > (arr_count[2] + arr_count[1]) && n > 3) || (arr_count[0] > 1 && arr_count[1] > 0 && arr_count[2] > 0)){
            cout<<"YES"<<endl;
        }
        else if (arr_count[1] == 1 && arr_count[2] ==1 && arr_count[0] == 1){
            cout<<"YES"<<endl;
        }
      
        else{
            cout<<"NO"<<endl;
        }

        test_cases--;
    }
}
