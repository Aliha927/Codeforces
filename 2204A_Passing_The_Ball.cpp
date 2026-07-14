#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        
        int length_of_string = 0;
        cin>>length_of_string;
        string student_standing_order = "";
        cin>>student_standing_order;
        int index = 0;
        while (index < length_of_string){
            if (student_standing_order[index] == 'L'){
                break;
            }
            index++;
        }
        cout<<index+1<<endl;
        test_cases--;
    }
}