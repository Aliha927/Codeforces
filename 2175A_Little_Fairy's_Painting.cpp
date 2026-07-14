#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        set<int> arr;
        int length_of_array = 0;
        cin>>length_of_array;
        for (int i = 0; i < length_of_array; i++){
            int element = 0;
            cin>>element;
            arr.insert(element);
        }
        vector<int>normal_size_Array;
        copy(arr.begin(), arr.end(), back_inserter(normal_size_Array));
        int distinct_count  = arr.size();
        while (normal_size_Array.size() == arr.size()){
            arr.insert(distinct_count);
            normal_size_Array.push_back(distinct_count);
            distinct_count = arr.size();
        }
        
        cout<<distinct_count<<endl;
        test_cases--;
    }
}