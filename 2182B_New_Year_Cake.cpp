#include<bits/stdc++.h>
using namespace std;

int finding_layers(long long a, long long b, bool start_with){
    long long number_of_layers=  0;
    long long kg_required = 1;
    bool flag = start_with;
     while(a >= 0 && b >= 0)
        {     
            if (flag == false){
                //b turns now
                b = b - kg_required;
                if (b >= 0){
                    number_of_layers++;
                }            
                flag = true;              
            }
            else if (flag == true) {
                //a's turn 
                a = a - kg_required;
                if (a >= 0){
                    number_of_layers++;
                }
               
               flag = false;
               
            }
           kg_required *= 2;
        }
         return number_of_layers;
    }


int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        long long a,b;
        cin>>a>>b;
        cout<<max(finding_layers(a,b,true), finding_layers(a,b,false))<<endl;
        test_cases--;
    }
}
