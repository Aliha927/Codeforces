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

//alternative approach
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     scanf("%d", &t);
//     while (t--) {
//         long long a, b;
//         scanf("%lld %lld", &a, &b);

//         long long oddSum = 0, evenSum = 0; // oddSum: sum of 4^0+4^1+...  evenSum: sum of 2*(4^0+4^1+...)
//         long long pow4 = 1;
//         int n = 0;
//         int best = 0;

//         // try n = 1, 2, 3, ... until both patterns fail
//         long long sumOddLayers = 0; // white in pattern A / dark in pattern B (positions 1,3,5,...)
//         long long sumEvenLayers = 0; // dark in pattern A / white in pattern B (positions 2,4,6,...)
//         long long layerSize = 1;

//         for (n = 1; n <= 60; n++) {
//             if (n % 2 == 1) sumOddLayers += layerSize;
//             else sumEvenLayers += layerSize;

//             // Pattern A: odd positions = white, even positions = dark
//             bool patternA = (sumOddLayers <= a && sumEvenLayers <= b);
//             // Pattern B: odd positions = dark, even positions = white
//             bool patternB = (sumEvenLayers <= a && sumOddLayers <= b);

//             if (patternA || patternB) best = n;
//             else break; // once both fail, further n only gets worse (monotonic)

//             if (layerSize > (long long)2e6) break; // safety cutoff
//             layerSize *= 2;
//         }

//         printf("%d\n", best);
//     }
// }

/*The sizes of the cake layers grow exponentially: each subsequent layer 
is twice the size of the previous one. This means that the answer to the problem 
is not very large — it does not exceed log2max(a,b)
, which under the problem constraints is no more than 20
. This allows us to write a solution with runtime proportional to the answer.

For example, we can write a loop that maintains the current 
total size of the "even" and "odd" layers (by "even", we mean 
the top layer and all layers of the same type with it, and by "odd", 
we mean all the other layers). During each iteration, we can increase 
one of these total sizes by the current power of two and check that we 
have enough chocolate for the current sizes of the layers (depending on 
the implementation, two cases may be required here, as the top layer can 
be covered with chocolate of any type). As soon as we run out of chocolate, 
we can break the loop — in the next iteration, another layer will be added, and 
if we did not have enough chocolate for k
 layers, we will not have enough for (k+1)
 layers either.

Another solution is to iterate over the number of layers in the cake and check if 
there is enough chocolate for a cake of that many layers. Although this solution is slower, 
it is still fast enough for the problem constraints.*/