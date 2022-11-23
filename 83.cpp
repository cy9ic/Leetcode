#include <iostream>
using namespace std;

// Node class for linked list with constructor
class node {
    public:
    int data;
    node * next;

    node(){
        next= NULL;
    }

    node(int val){
        data = val;
        next = NULL;
        
    }

};

// Solutions class for the function of removing duplicates
class Solution{
    public:

    node * remove_duplicate(node * head){

        node * ptr1 = head;
        node * ptr2 = head;

        while(ptr2!=NULL){

            while(ptr2!=NULL && ptr2->data == ptr1->data){
                ptr2 = ptr2->next;
            }
            ptr1->next = ptr2;
            
            ptr1 = ptr1->next;
        }
        return head;  
        
        }
     

};

int main(){

    // size of the Linked list
    int n;
    cin>>n;
    int data;
    node * first = new node();
    node *temp = first;

    for(int i=0;i<n;i++){
        cin>>data;    
    if(i==0){

                first->data = data;
                first->next = NULL;

        }else{
            node * nnode = new node(data);
            temp->next = nnode;
            temp = temp->next;
            
        }
        
    }


// Calling the remove duplicates function from the Solution class 
    Solution * S1 = new Solution();
    node * answer = S1->remove_duplicate(first);

    

    // Outputing the desired output from the remove duplicate function
 while(answer!=NULL){
        cout<<answer->data<<" ";
        answer= answer->next;
    }


    return 0;
}



// Leetcode
// Difficulty : Easy 
// Question 83 : Removing the duplicates from a sorted linked list

// In this code : 
//             Take input in first line for the number of elements in a linked list
//             In second line put the elements of the linked list
            
//             Output: 
//             Sorted linked list 


                        // -------     Harkaran        ------
//                                  23 / November / 2022
