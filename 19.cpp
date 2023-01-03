#include <bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int> v1;

        while(head!=NULL){
            v1.push_back(head->val);
            head = head->next;

        }
        v1[v1.size()-n] = -1;

        ListNode * result = new ListNode();
        ListNode * temp = result;

        for(int i=0;i<v1.size();i++){
            if(v1[i]==-1){continue;}
            ListNode * newnode = new ListNode(v1[i]);
            temp->next = newnode;
            temp = temp->next;
        }
        result = result->next;

        return result;
    }
};



int main(){




ListNode* head = new ListNode(1);
ListNode* head2 = new ListNode(2);
ListNode* head3= new ListNode(3);
ListNode* head4 = new ListNode(4);
ListNode* head5 = new ListNode(5);

head->next = head2;
head2->next = head3;
head3->next = head4;
head4->next = head5;


Solution s1;

s1.removeNthFromEnd(head,2);



    return 0;
}


//                 -------------------Leetcode Question - 19----------

// Description: Remove Nth Node From End of List

// Sample Test Case:

//     Input: head = [1,2,3,4,5], n = 2
//     Output: [1,2,3,5]


//     Harkaran 
//     Date : 3 / jan / 2023
//     Time : 6.37 P.M