#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        int number_of_candies = 0;
        cin>>number_of_candies;
        if (number_of_candies % 3 == 0){
            cout<<0<<endl;
        }
        else{
            int mod_num = number_of_candies % 3;
            switch (mod_num){
                case 1:
                    cout<<2<<endl;
                    break;
                case 2:
                    cout<<1<<endl;
                    break;
            }
        }
     
        test_cases--;
    }
}