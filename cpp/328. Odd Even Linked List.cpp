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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *odd = NULL, *even = NULL, *odd_head = NULL, *even_head = NULL, *temp;
        while(head != NULL){
            if(head->val%2 == 0){
                if(even == NULL){
                    temp = head;
                    head = head->next;
                    temp->next = NULL;
                    even_head = temp;
                    even = even_head;
                }
                else{
                    even->next = head;
                    even = even->next;
                    head = head->next;
                    even->next = NULL;
                }
            }
            else{
                if(odd == NULL){
                    temp = head;
                    head = head->next;
                    temp->next = NULL;
                    odd_head = temp;
                    odd = odd_head;
                }
                else{
                    odd->next = head;
                    odd = odd->next;
                    head = head->next;
                    odd->next = NULL;
                }
            }
        }
        if(odd_head == NULL)
            return even_head;
        else{
            odd->next = even_head;
            return odd_head;
        }
    }
};
