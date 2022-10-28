#include<bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int findDuplicate(vector<int> v1){

        sort(v1.begin(),v1.end());

                int duplicate = v1[0];
        for(int i=1;i<v1.size();i++){
            
            if(duplicate==v1[i]){
                return duplicate;
            }else{
                duplicate = v1[i];
            }
        }

    return duplicate;

    };

};


int main(){

int n;
cin>>n;
vector<int> arr;
int a;

for(int i=0;i<n;i++){
    cin>>a;
    arr.push_back(a);
}

Solution * s1 = new Solution();

cout<<s1->findDuplicate(arr);

    return 0;
}




        //------ Harkaran ----- 28.october.2022