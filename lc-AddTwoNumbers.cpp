#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0, l1Val, l2Val;
        ListNode* res = new ListNode();
        ListNode* temp = res;
        
        
        while(1){
            if(!l1 && !l2){
                if(carry>0){
                    temp->next = new ListNode(carry);
                }
                return res->next;
            }
            if(l1) l1Val = l1->val;
            else l1Val = 0;
            if(l2) l2Val = l2->val;
            else l2Val = 0;
            
            int sum = l1Val + l2Val + carry;
            temp->next = new ListNode(sum%10);
            carry = floor((double)sum/10);
            
            // ListNode* t = res;
            // while(t){
            //     cout << t->val << " ";
            //     t = t->next;
            // }
            // cout << endl << "----------" << endl;
            
            if(l1) l1 = l1->next;  
            if(l2) l2 = l2->next;  
            temp = temp->next;
        }
        
    }
};

int main(){
    int val = 12;
    int right = val%10;
    int tenth = floor((double)val/10);
    cout << "--" << right << "--" << tenth << "--" << endl;

    return 0;
}