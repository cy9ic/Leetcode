#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

 class Solution {
public:
    int reverse(int x) {

    double rev = 0;
    int count = 0;
    bool negative;

     if(x>0){negative = false;}else{negative = true;};
     x = abs(x);
     
     rev = x;
     while(x>0){
         x = x/10;
         count++;
     }
count--;
x = rev;
rev = 0;
    while(x>0){
        


        rev += x%10*pow(10,count);

        count--;
        x = x/10;
    }

    if(rev>2147483647  || -rev<-2147483648){return 0;}

    if(negative == true){
        rev = - rev;
    }

    return rev;
    

    }
};


int main(){



int x;
cin>>x;
Solution S1;
cout<< S1.reverse(x);




return 0;

}




//                      Leetcode question number 7

// Description : Reversing an signed integer and returing 0 if it is not in the int range. 
//             Return the reverse number if it is in the range.

// Sample case: 

//     Input: x = 123
//     Output: 321

//     Input: x = -123
//     Output: -321

//     Input: x = 120
//     Output: 21



//                     Harkaran 
//                     Date - 3 / Jan / 2022
//                     Time - 1.40 A.M