#include<bits/stdc++.h>
using namespace std;
/*
Problem statement
You are given a single integer n.
 Construct an array of n
 distinct positive integers a1,…,an
 such that for all i(1≤i≤n)
, a1+a2+a3+…+an
 is divisible by ai,
 or determine that no such array exists.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤50
). The description of the test cases follows.

The first and only line of each test case contains a single integer n(1≤n≤50).

Output
For each test case, if there is no solution, output a single integer −1
.

Otherwise, output n
 integers a1,…,an(1≤ai≤1017)
 — an array satisfying the conditions.

If there are multiple solutions, print any of them.

Example
InputCopy
3
1
4
5
OutputCopy
1
1 9 2 6
12 3 10 20 15
Note
In the first test case, the condition is clearly satisfied, since 1
 is divisible by itself.

In the second test case, the output is a=[1,9,2,6].
 We have a1+a2+a3+a4=18,
 which is divisible by all ai.
*/

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        int n;
        cin>>n;
        vector<long long>arr;
        if (n == 1){
            cout<<1<<endl;
            test_cases--;
            continue;
        }
        else if (n >= 4){
            
            arr.push_back(1);
            arr.push_back(9);
            arr.push_back(2);
            arr.push_back(6);
            long long sum = 18;
            for(int i = 5; i <= n; i++){
                arr.push_back(sum);
                sum = sum * 2;
            }
        }
        else if (n == 2){
            cout<<-1<<endl;
            test_cases--;
            continue;     
        }
        else if (n == 3){
            arr.push_back(1);
            arr.push_back(2);
            arr.push_back(3);  
        }
        for(int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        test_cases--;
    }
}