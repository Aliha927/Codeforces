#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        int n,c;
        cin>>n>>c;
        int* a = new int [n];
        int *b = new int [n];

        for (int i = 0; i < n; i++){
            cin>>a[i];
        }
        for (int i = 0; i < n; i++){
            cin>>b[i];
        }

        int* dup_a = new int[n];
        int* dup_b = new int[n]; 
        for(int i = 0; i < n; i++){
            dup_a[i] = a[i];
            dup_b[i] = b[i];
        }
       
        sort(dup_a,dup_a+n);
        sort(dup_b,dup_b+n);

        
        bool ok_no_reoder = true;
        long long cost_no_reorder = 0;
        for(int i =0 ; i < n ; i++){
            if (a[i] < b[i]){
                ok_no_reoder = false;
                break;
            }
            cost_no_reorder = cost_no_reorder + (a[i] - b[i]);
        }
        long long cost_re = 0;
        bool ok_reorder = true;
        for(int i = 0; i < n; i++){
            if (dup_a[i] < dup_b[i]){
                ok_reorder = false;
                break;
            }
            cost_re += (dup_a[i] - dup_b[i]);
        }  
        long long ans = -1;
        if (ok_no_reoder == true){
            ans = cost_no_reorder;
        }
        if (ok_reorder == true){
            long long total = cost_re + c;
            if (ans == -1 || total < ans){
                ans = total;
            }
        }
        cout<<ans<<endl;
        test_cases--;
    }
}