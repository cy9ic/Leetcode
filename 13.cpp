#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int precedence(char a){

        if(a=='I'){
            return 1;
        }else if(a=='V'){
            return 5;
        }else if(a=='X'){
            return 10;
        }else if(a=='L'){
            return 50;
        }else if(a=='C'){
            return 100;
        }else if(a=='D'){
            return 500;
        }else if (a=='M'){return 1000;}

        return 0;

    }

    int romanToInt(string s) {

        int result = 0;


        for(int i=0;i<s.length()-1;i++){

            
            if(precedence(s[i])>precedence(s[i+1])){
                result+=precedence(s[i]);
            }else if(precedence(s[i])<precedence(s[i+1])){
                result-=precedence(s[i]);
            }else{
                result+=precedence(s[i]);
            }

        }
        result+=precedence(s.back());

        return result;
        
    }
};


int main(){


string a;

cin>>a;

Solution s1;
cout<<s1.romanToInt(a);


    return 0;
}



// --------------------------          Leetcode problem number 13

//     Description : Converting roman number string to integer equivalent number 


//     Sample test case :

//         Input: s = "III"
//         Output: 3
//         Explanation: III = 3.
//                                                                                         Date : 3 / Jan / 2023                                                                                        Time 
//         Input: s = "MCMXCIV"                                                            Time : 3.22 P.M
//         Output: 1994
//         Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.