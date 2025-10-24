// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists into one sorted list. 
// The list should be made by splicing together the nodes of the first two lists.

// Return the head of the merged linked list.


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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         ListNode dummy(0);
         ListNode* node = &dummy;

         while(list1!=NULL && list2!=NULL)
         {
            if (list1->val < list2->val)
            {
                node->next=list1;
                list1=list1->next;
            }
            else
            {
                node->next=list2;
                list2= list2->next;
            }
            node=node->next;
         }
         if (list1)
         {
            node->next=list1;
         }
         else if(list2)
         {
            node->next=list2;
         }
         
        return dummy.next;
    }
};
