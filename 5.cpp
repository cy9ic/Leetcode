#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:

    void backtrack(string digits,int i,unordered_map<char,string> map,string temp,vector<string> ans){

            if(digits.length()==temp.length()){
                    ans.push_back(temp);
                    return;
            }

            string curr = map[digits[i]];

        for(int k=0;k<curr.length();k++){
            temp+=curr[k];
            backtrack(digits,i+1,map,temp,ans);
            temp.erase(temp.length()-1);
        }

    };

    

    vector<string> letterCombinations(string digits) {

        
        vector<string> ans;
        unordered_map<char,string> map;

        map.insert(make_pair('2',"abc"));
        map.insert(make_pair('3',"def"));
        map.insert(make_pair('4',"ghi"));
        map.insert(make_pair('5',"jkl"));
        map.insert(make_pair('6',"mno"));
        map.insert(make_pair('7',"pqrs"));
        map.insert(make_pair('8',"tuv"));
        map.insert(make_pair('9',"wxyz"));

        vector<string> res; 
        string temp ;   

        
        
        backtrack(digits,0,map,temp,ans);
        return res;

    }
};


int main(){


 unordered_map<char,string> map;

        map.insert(make_pair('2',"abc"));
        map.insert(make_pair('3',"def"));
        map.insert(make_pair('4',"ghi"));
        map.insert(make_pair('5',"jkl"));
        map.insert(make_pair('6',"mno"));
        map.insert(make_pair('7',"pqrs"));
        map.insert(make_pair('8',"tuv"));
        map.insert(make_pair('9',"wxyz"));

        vector<string> res; 
        string temp ;   

cout<<map['2'];

return 0;

}