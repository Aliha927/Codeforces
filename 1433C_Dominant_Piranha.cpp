#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<long long>arr;
        int maximum= 0;
        for(int i = 0; i < n; i++){
            int element;
            cin>>element;
            maximum= max(element, maximum);
            arr.push_back(element);
        }
        int index = -1;
        for(int i =0; i < n; i++){
            if (arr[i] != maximum){
                continue;
            }
            if (i > 0 && arr[i-1] != maximum){
                index = i+1;
                break;
            }
            if (i < n-1 && arr[i+1] != maximum){
                index = i+1;
                break;
            }
        }
        cout<<index<<endl;

    }

}

/*Alternative Solution -> Raw in Nature*/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int t;
//     cin>>t;
//     while (t--){
//         int n;
//         cin>>n;
//         vector<long long>arr;
//         for(int i = 0; i < n; i++){
//             int element;
//             cin>>element;
//             arr.push_back(element);
//         }
//         vector<int>maximum; 
//         long long max = arr[0];
//         for(int i = 0; i < n; i++){
//             if (arr[i] > max){
//                 max = arr[i];
//             }
//         }
//         for(int i =0; i <n; i++){
//             if (arr[i] == max){
//                 maximum.push_back(i);
//             }
//         }
//         if (maximum.size() == arr.size()){
//             cout<<-1<<endl;
//             continue;
//         }
//         if (maximum.size() == 1){
//             cout<<maximum[0]+1<<endl;
//             continue;
//         }
//         for(int i =0 ; i < maximum.size(); i++){
//             if (maximum[i] != 0 && maximum[i] != n-1){
//                 if (arr[maximum[i] -1] < arr[maximum[i]] || arr[maximum[i] +1] < arr[maximum[i]] ){
//                     cout<<maximum[i]+1<<endl;
//                     break;
//                 }
//             }
//             else if (maximum[i] == 0){
//                 if (arr[maximum[i]+1] < arr[maximum[i]]){
//                     cout<<maximum[i]+1<<endl;
//                     break;
//                 }
//             }
//             else if(maximum[i] == n-1){
//                 if (arr[maximum[i]-1] < arr[maximum[i]]){
//                     cout<<maximum[i]+1<<endl;
//                     break;
//                 }
//             }
//         }
//     }
// }
