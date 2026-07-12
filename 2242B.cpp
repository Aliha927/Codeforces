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
        int index = arr.size() - 2;
        bool flag = false;
 
            //for second condition to be fullfilled 
            // count left > count right and count left is count 1 and count 2 > count 3 

            int count_left = 0;
            int count_right = 0;
           while (true){
            if (arr[index] == 3){
                count_right++;
            }
            else{
                count_left++;
           }
           index--;
          
           if (count_left <= count_right){
                break;
            }
             if (index < 0){
            flag = true;
            cout<<"NO"<<endl;
                break;
           }
           }
        
            
        if (flag == false){
                int count_ones =0;
                int count_others = 0;
                while (index >= 0){
                    if (arr[index] == 1){
                        count_ones++;
                    }
                    else{
                        count_others++;
                    }
                    index--;
                }
            
                if (count_ones >= count_others){
                    cout<<"YES"<<endl;
                    
                }
                else{
                    cout<<"NO"<<endl;
                    
                }
            }
        test_cases--;
    }
}
