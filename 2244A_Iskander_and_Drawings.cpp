#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int max = 0;
        int i = 0 ;
        while(i< n){
            int start = 0;
            if (s[i] == '#'){
                start = i+1;
                int count = 1;
                while (true){
                    if (s[i] == '*'){
                        break;
                    }
                    i++;
                    count++;
                    if (i >= n){
                        break;
                    }
                }
                if (max < count){
                    max = count;
                }
                
            }
            else{
                i++;
            }

        }
        cout<<max/2<<endl;
        test_cases--;   
    }
}