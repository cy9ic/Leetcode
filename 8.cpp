#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        short int num = 1;
      if(s.empty() == 1) return 0;
    int i=0;
    if(s[i]==' '){while(s[i]==' ' && i<s.length()){i++;}}

    if(i>=s.length()){return 0;}
    

    if(s[i]=='+'){
        num = 1;
        i++;
    }else if(s[i]=='-'){
        num = -1;
        i++;
    }
long long res = 0;
    
    while(s[i]>='0' &&  s[i]<='9'){
        res =  res * 10 + (s[i]-'0');
                i++;
        }   




    res = res*num;

    if(res < -2147483648){
        res = -2147483648;
    }else if(res > 2147483647){
        res = 2147483647;
    }


        return res;
    }
};


int main(){


string a ;
cin>>a;

Solution s1 ;
cout<<s1.myAtoi(a);


return 0;

}



    //             -----------------------Leetcode question number 8.--------------------
                
    //         Description: Converting a string form of integer to integer form and returing it in the function;


    //         Level - Medium

    // Sample test case:

    // Input: s = "42"
    // Output: 42
    // Explanation: The underlined characters are what is read in, the caret is the current reader position.
    // Step 1: "42" (no characters read because there is no leading whitespace)
    //         ^
    // Step 2: "42" (no characters read because there is neither a '-' nor '+')
    //      ^
    // Step 3: "42" ("42" is read in)
    //        ^
    // The parsed integer is 42.
    // Since 42 is in the range [-231, 231 - 1], the final result is 42.




    // -------------------------------------------------------by Harkaran 
    // -------------------------------------------------------Date : 3/ jan / 2023 
    // -------------------------------------------------------Time 4.08 A.M

    // Done with the help of solution given by rohitramteke in leetcode solution section