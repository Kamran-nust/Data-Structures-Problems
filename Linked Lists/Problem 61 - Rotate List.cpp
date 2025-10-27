// Given the head of a linked list, rotate the list to the right by k places



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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
        {
            return head;
        }
        ListNode * tail = head;
        int i=1;
         while (tail->next)
         {
            tail=tail->next;
            i++;
         }
         tail->next = head;

         k=k%i;
        for (int j=1; j<i-k+1; j++)
        {
            tail= tail->next;
          }

          head= tail->next;
          tail->next=NULL;
         return head;
        
    }
};
