// You are given two non-empty linked lists representing two non-negative integers. 
// The digits are stored in reverse order, and each of their nodes contains a single digit. 
// Add the two numbers and return the sum as a linked list.
// You may assume the two numbers do not contain any leading zero, except the number 0 itself.


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
        ListNode * dummy = new ListNode();
        ListNode * curr = dummy;
        int val1, val2, sum,carry=0;
        while (l1!=nullptr || l2!=nullptr || carry!=0)
        {
            if (l1!=nullptr)
            {
                val1= l1->val;
            }
            else
            {
                val1=0;
            }
            if (l2!=nullptr)
            {
                val2= l2->val;
            }
            else
            {
                val2=0;
            }
            sum= val1+val2+carry;
            
            carry=sum/10;
            sum= sum%10;
            ListNode *temp=new ListNode(sum);
            curr->next=temp;
            curr= curr->next;
            if (l1!=nullptr)
            {
                l1= l1->next;
            }
            else
            {
                l1=nullptr;
            }
            if (l2!=nullptr)
            {
                l2= l2->next;
            }
            else
            {
                l2=nullptr;
            }

        }
        curr=dummy->next;
        delete dummy;
        return curr;

    }
};
