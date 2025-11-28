
// Given the head of a singly linked list, return the middle node of the linked list.

// If there are two middle nodes, return the second middle node.
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
    ListNode* middleNode(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while (fast!=NULL)
        {
            if (fast->next==NULL){
                break;
            }
                fast= fast->next->next;
            slow= slow->next;       
        }
        return slow;        
    }
};
