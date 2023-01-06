#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        int ice_cream = 0;
        int smallest = INT_MAX;
        int index = 0;

         sort(costs.begin(),costs.end());

         for(int i=0;i<costs.size();i++){
             if(coins-costs[i]>=0){
                 ice_cream+=1;
                 coins-=costs[i];
             }else if(coins-costs[i]<0){
                 return ice_cream;
             }
         }
    
        return ice_cream;
    }
};

int main(){


    
cout<<"Enter the number of elements you want to input: \n";

int n;
cin>>n;

vector<int> v1;
cout<<"Enter the elements: \n";
int a;
for(int i=0;i<n;i++){
    cin>>a;
    v1.push_back(a);
}

int coins ;
cout<<"Enter the number of coins: ";
cin>>coins;

Solution s1;

cout<<"The number of ice-creams that be brought at max is: "<<s1.maxIceCream(v1,coins);



    return 0;
}


// Leetcode : question 1833

// Description : Finding maximum number of ice-cream bars that can be brought in the given number of coins
// Algo-used : greedy algorith and sorting


// Sample Input/Output:                                                                                               -Harkaran
//                                                                                                                     Time: 8.28 P.M
// 1->                                                                                                                 Date: 6/ jan / 2023
// Input: costs = [1,3,2,4,1], coins = 7                                                                               Time complexity-> O(Nlog(N))
// Output: 4
// Explanation: The boy can buy ice cream bars at indices 0,1,2,4 for a total price of 1 + 3 + 2 + 1 = 7.

// 2->
// Input: costs = [10,6,8,7,7,8], coins = 5
// Output: 0
// Explanation: The boy cannot afford any of the ice cream bars.

// 3->
// Input: costs = [1,6,3,1,2,5], coins = 20
// Output: 6
// Explanation: The boy can buy all the ice cream bars for a total price of 1 + 6 + 3 + 1 + 2 + 5 = 18.