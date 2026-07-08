#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        int n,m,d;
        cin>>n>>m>>d;
        int num_towers = 0;
        if (m > d){
            cout<<n<<endl;
            test_cases--;
            continue;
        }
        while (n >= 0){
            int total_weight = 0;
            while(total_weight <= d && n >= 0){
                total_weight += m;
                n--;
            }
            num_towers++;
            n--;
        }
        cout<<num_towers<<endl;
        test_cases--;
    }
}
