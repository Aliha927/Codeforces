/*
PROBLEM STATEMENT 
You have a prize wheel divided into l sections, numbered from 0 to l−1. The sections are arranged in a circle, so after section l−1, the numbering continues again from section 0.
Initially, the prize pointer is at section a. Each time you spin the wheel, the pointer moves exactly b sections forward. That is, after one spin, the pointer moves from section a to section (a+b)modl, after two spins to (a+2b)modl, and so on∗.
You may spin the wheel any number of times (including zero). After you stop, the section where the pointer finally lands determines your prize: you receive an amount equal to the number of that section.
What is the maximum prize you can obtain?
∗Here, xmody denotes the remainder from dividing xby y.
Input
Each test contains multiple test cases. The first line contains the number of test cases t(1≤t≤500). The description of the test cases follows.

The first line of each test case contains three integers l,a, and b (1≤l,b≤5000, 0≤a≤l−1).

Output
For each test case, output the maximum prize that can be obtained.

Example
InputCopy
4
5 3 2
2 0 6
8 2 4
100 0 1
OutputCopy
4
0
6
99
Note
In the first test case, by spinning the wheel three times and then claiming the reward, you can obtain a maximum value of 4. The sequence of pointer positions is: 3,0,2,4,1,3,0,…
In the second test case, the pointer will remain on section 0 indefinitely.
In the fourth test case, with b=1 and starting from section 0, the pointer will iterate over all sections, including the last one.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases = 0;
    cin>>test_cases;
    while (test_cases > 0){
        int l,a,b;
        cin>>l>>a>>b;
        int re_loop = (a + b) % l;
        int max = 0;
        int cycle_value = re_loop;
        while (true){
            cycle_value = (cycle_value + b) % l;
            if (max < cycle_value){
                max = cycle_value;
            }
            if (cycle_value == re_loop){
                break;
            }
        }
        cout<<max<<endl;
        test_cases--;
    }
}
