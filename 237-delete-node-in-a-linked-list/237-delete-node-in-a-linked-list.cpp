/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        //temp bna lete h delete node k aage wale ko
        ListNode* temp = node->next;
        //temp ki value node m copy kr di 
        node->val = temp->val;
        //temp k next add node k next m copy kr diya
        node->next = temp->next;
        //delete temp
        delete(temp);
        
    }
};