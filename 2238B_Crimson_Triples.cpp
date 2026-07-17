#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;
    while (test_cases > 0){
        long long n;
        cin>>n;
        long long ans = 0;
        for(int i = 1; i <= n; i++){
            ans+= pow(n/i, 2);
        }
        cout<<ans<<endl;

        test_cases--;
    }
}
/*
If b divides both a and c, then lcm(a,b)=a and lcm(b,c)=c, so gcd(lcm(a,b),lcm(b,c))=gcd(a,c), 
meaning the condition is satisfied. To prove the converse, assume the equality holds but b∤a. 
Since both lcm(a,b) and lcm(b,c) are multiples of b, their gcd is also a multiple of b. 
By the given condition, this gcd equals gcd(a,c), implying b∣gcd(a,c). However, gcd(a,c) 
divides a, so b∣a, contradicting our assumption. The same argument shows b∣c. Hence, 
the condition is true if and only if b divides both a and c. For a fixed b, there are ⌊b/n⌋ choices each for a and c, 
so the number of valid triples is
 (⌊b/n⌋)^2. Summing this over all b from 1 to n gives the answer, yielding an O(n) solution per test case.
*/