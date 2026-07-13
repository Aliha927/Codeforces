#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    
    while(test_cases--){
        long long n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        

        vector<bool> can2(n);
        int count12 = 0, count3 = 0;
        for (int i = n - 2; i >= 0; i--){
            int element = arr[i];
            if (element <= 2){
                count12++;
            }
            else {
                count3++;
            }
            can2[i] = (count12 >= count3);
            
   
            count12 = max(count12 - count3, 0);
            count3 = 0;
        }
        
     
        vector<bool> can1(n);
        int count1 = 0, count23 = 0;
        for (int i = 0; i < n; i++){
            int element = arr[i];
            if (element <= 1){
                count1++;
            }
            else {
                count23++;
            }
            can1[i] = (count1 >= count23);
        }
        
   
        bool answer_found = false;
        
        for(int i = 0; i < n - 1; i++){
            if(can1[i] == true && can2[i + 1] == true){
                answer_found = true;
                break;
            }
        }
        
        if(answer_found == true){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}