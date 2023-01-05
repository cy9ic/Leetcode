#include <bits/stdc++.h>
using namespace std;


string Int_toRoman(int n){

    string ans = "";
    while(n>0){

        if(n>=1000){

            ans+='M';
            n = n-1000;
        }else if(n<1000 && n>=500){
            if(n>=900){
                ans+="CM";
                n = n-900;
            }else{
                ans+='D';
                n = n-500;
            }
        }else if(n<500 && n>=100){
            if(n>=400){
                ans+="CD";
                n = n-400;
            }else{
                ans+='C';
                n = n-100;
            }
        }else if(n<100 && n>=50){
            if(n>=90){
                ans+="XC";
                n =n-90;
            }else{
                
                ans+='L';
                n = n-50;
            }
        }else if(n<50 && n>=10){
            if(n>=40){
                ans+="XL";
                n = n-40;
            }else {
                ans+='X';
                n = n-10;
            }
        }else if(n<10 && n>=5){
             if(n>=9){
                ans+="IX";
                n = n-9;
            }else {
                ans+='V';
                n = n-5;
            }
        }else if(n<5){
             if(n==4){
                ans+="IV";
                n = n-40;
            }else {
                ans+='I';
                n = n-1;
            }
    }}

    return ans;

}

int main(){

    int n;
    cin>>n;



    cout<<Int_toRoman(n);



    return 0;
}



// Leetcode Question 12

// Description :
// Converting integer to roman number and returning it in form of a string 

// (Made with if else only and using no hastable)

// Sample input/output :
//                                                                                                                 Date: 6 / jan / 2023
//                                                                                                                 Time : 12.54 A.M
// Input: num = 3                                                                                                             
// Output: "III"
// Explanation: 3 is represented as 3 ones.

// Input: num = 1994
// Output: "MCMXCIV"
// Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

// Input: num = 58
// Output: "LVIII"                                                                                         -Harkaran 
// Explanation: L = 50, V = 5, III = 3.                                                                                