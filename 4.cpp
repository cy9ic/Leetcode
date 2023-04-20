#include <iostream>
#include <math.h>
#include <iomanip>
#include <vector>
using namespace std;

int main(){


int a ;
cin>>a;
int arr[a];
for(int i=0;i<a;i++){
cin>>arr[i];


}
int b;
cin>>b;
int arr2[b];
for(int i=0;i<b;i++){
cin>>arr2[i];
}



int arr3[100];


int ct = 0;
int i=0 ,j = 0;
int tt = a+b;

while(a!=0 && b!=0){
    
    if(arr[i]>arr2[j]){
        arr3[ct] = arr2[j];
        b--;
        j++;
        
    }else {
        arr3[ct] = arr[i];
        i++;
        a--;
    }
    
        ct++;
    
}

// cout<<a<<b;




if(a!=0){
    while(a!=0){
        arr3[ct] = arr[i];
        i++;
        a--;
        ct++;
    }    
}else if(b!=0){
    while(b!=0){
        arr3[ct] = arr2[j];
        j++;
        ct++;
        b--;
    }
}

// cout<<"\n";

for(int i=0;i<ct;i++){
    cout<<arr3[i]<<" ";
}

double result  = 0;

if(tt%2==0){
    int start = 0; int end = tt-1 ;
 int mid = (start+end)/2;
 cout<<"\n"<<mid<<" "<<arr3[mid]<<" "<<arr3[mid+1]<<"\n";
    result = (arr3[mid]+arr3[mid+1]);
    result/=2;
    // cout<<result;

}else{
    int start = 0; int end = tt-1 ; 
    int mid = (start+end)/2;
    cout<<arr3[mid]<<"Next";
    result = arr3[mid];
}

cout<<" \n";
cout<<setprecision(5);
cout<<result;
return 0;

} 



    //             -----------------------Leetcode question number 4.--------------------
                
    //         Description:  Median of Two Sorted Arrays


    //         Level - Hard 

    // Sample test case:
    // Input: s =  nums1 = [1,3], nums2 = [2]
    // Output: 2.00000
    // Explanation: merged array = [1,2,3] and median is 2.
    
    // -------------------------------------------------------by Harkaran 
    // -------------------------------------------------------Date : 20/ April / 2023 
    // -------------------------------------------------------Time 11.27 P.M
