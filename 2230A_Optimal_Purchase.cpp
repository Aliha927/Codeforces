/* Optimal Purchase  
-- Question Statement 
You have a group of n students who need access to an online course. Two types of access keys are available in the store:
Individual key: costs a dollars and gives access to one student.
Group key: costs b dollars and gives access to a group of up to three students inclusive.
A group key can also be used for fewer students (one or two), and its price does not change.
Your task is to determine the minimum amount of money needed to provide access to the online course for all n students.

Input
The first line contains one integer t
 (1≤t≤10^4) — the number of test cases.
Each test case consists of one line containing three integers n,a,b
 (1≤n,a,b≤10^8) — the number of students, the cost of an individual key, and the cost of a group key.
Output
For each test case, output one integer — the minimum amount of money needed to provide access to the online course for all n students.

Example
InputCopy
9
5 10 25
4 10 50
1 20 15
1 10 25
100000000 100 290
2 10 15
300 1 1
4 10 12
11 10 20
OutputCopy
45
40
15
10
9666666670
15
100
22
80
Note
In the first example, you can buy 1 group key and 2 individual keys.
In the second example, you can buy 4 individual keys.
In the third example, you can buy 1 group key.
In the fourth example, you can buy 1 individual key.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        long long n,a,b;
        cin>>n>>a>>b;
        long long minimium_cost = 0;
        minimium_cost = n*a; 
        long long num = n / 3;
        // while (num >= 0){
        //     long long price_a  = (num * b) + ((n - (num*3)) * a); 
        //     minimium_cost = min(price_a, minimium_cost);
        //     num--;   
        // }
        /*
        HERE you do not need to check all possibilities because it is a linear function 
        formula for cost is 
        num* b + (n-3num) * a
        c = num
        cb + na - 3ca
        c(b - 3a) + na
        na is constant 
        so you go 
        c = 0,1,2,3,4....
        each time increases by b - 3a so 
        u check only least possibility
        */
        long long price_a  = (num * b) + ((n - (num*3)) * a); 
        minimium_cost = min(price_a, minimium_cost);
        long long price_b = (n/3 * b);
        if (n%3 < 3){
            price_b+=b;
        }
        minimium_cost = min(minimium_cost, price_b);
        cout<<minimium_cost<<endl;
        test_cases--;
    }
}

