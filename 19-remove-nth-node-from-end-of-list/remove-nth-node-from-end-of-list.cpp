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
   
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode*temp=head;
      int cnt=0;
      while(temp!=NULL){
        cnt++;
        temp=temp->next;
      }
      int target=cnt-n;
       if (target==0) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
      cnt=1;
      temp=head;
      while(cnt!=target){
        temp=temp->next;
        cnt++;

      }
      
       ListNode*delNode=temp->next;
       temp->next=temp->next->next;
        delete(delNode);
        return head;
       
    }
};