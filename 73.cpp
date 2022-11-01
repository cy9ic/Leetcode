#include<bits/stdc++.h>
using namespace std;


class solution{

    public:

    void zeroSet(int*arr[],int n,int m){


            vector <pair<int,int>> v1;

            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(arr[i][j]==0){
                        v1.push_back(make_pair(i,j));
                    }
                }
            }
                cout<<"The size of the vector is: "<<v1.size()<<endl;
                int a=0;
            while(a<v1.size()){
                    int temp =0 ;
                    while(temp<n){

                        arr[temp][v1[a].second] = 0;
                        temp++;
                    
                    }
                    temp = 0;

                    while(temp<m){

                        arr[v1[a].first][temp] = 0;
                        temp++;
                        
                    }

                    a++;


                    

            }

        

    }


};

int main(){
    
    int row;
    cin>>row;
    int col;
    cin>>col;
    int *  arr[row];

    for(int i=0;i<row;i++){
        arr[i] = new int[col];
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

solution * s = new solution();

s->zeroSet(arr,row,col);

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
    
    return 0;

    }