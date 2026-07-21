#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        int n;
        cin>>n;
        vector<long long>a;
        vector<long long>b;
        
        for(int i = 0; i < n ; i++){
            int element; 
            cin>>element;
            a.push_back(element);
        }
        for(int i = 0; i < n ; i++){
            int element; 
            cin>>element;
            b.push_back(element);
        }
        bool f = false;
        for(int i =0; i < n; i++){
            if (a[i] > b[n-1]){
                cout<<-1<<endl;
                f = true;
                break;
            } 
        }
        if (f == false){
            

        }

        test_cases--;
    }
}