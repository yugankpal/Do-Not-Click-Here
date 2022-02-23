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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL){
            return NULL;
        }
        map<ListNode* , bool>visited;
        ListNode* temp=headA;
        
        while(temp != NULL){
            visited[temp] = true;
            temp = temp->next;
        }
        
        ListNode* temp1 =headB;
        while(temp1 != NULL){
            if(visited[temp1] == true){
                return temp1;
            }
            temp1 = temp1->next;
        }
       return NULL;
    }
};