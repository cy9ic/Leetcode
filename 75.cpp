#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    vector<int> sortColors(vector<int> v1){

        int red_z = 0 ;
        int white_o = 0;
        int blue_t = 0;

        for(int i=0;i<v1.size();i++){
            if(v1[i]==0){
                red_z++;
            }else if(v1[i]==1){
                white_o++;
            }else if(v1[i]==2){
                blue_t++;
            }
        }

    v1.clear();

    for(int i=0;i<red_z;i++){
        v1.push_back(0);
    }


    for(int i=0;i<white_o;i++){
        v1.push_back(1);
    }

    for(int i=0;i<blue_t;i++){
        v1.push_back(2);
    }
    return v1;

    }
};



int main(){

    int n;
    cin>>n;

    vector<int> v1;
    int a;

    for(int i=0;i<n;i++){
      cin>>a;
      v1.push_back(a);  

    }

    Solution * s = new Solution();

    v1 = s->sortColors(v1);
    
    int i=0;

    while (i<v1.size())
    {
        cout<<v1[i]<<" ";
        i++;
    }
    


    return 0;
}





//   ------- Harkaran 28.october.2022------

// Sample case for testing:
                        // size of the vector =  6
                        // inputs for the vector=  2 0 2 1 1 0   (red = 0, white = 1 , blue = 2)
                        // Output = 0 0 1 1 2 2