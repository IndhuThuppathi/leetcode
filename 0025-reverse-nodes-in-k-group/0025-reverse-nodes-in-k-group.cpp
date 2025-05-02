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
   
   ListNode* getkthnode(ListNode* temp,int k)
   {
       k=k-1;
       while(temp!=NULL && k>0)
       {
          k--;
          temp=temp->next;
       }
       return temp;
   }

   ListNode* reverse(ListNode* head) {
         ListNode* reverse = NULL;
        
        while (head != NULL) {
            ListNode* nextNode = head->next;
            head->next = reverse;
            reverse = head;
            head = nextNode;
        }
        return reverse;
    }
   
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL)
        {
            ListNode* kNode=getkthnode(temp,k);
            if(kNode==NULL)
            {
                if(prev)
                {
                    prev->next=temp;
                    break;
                }
            }
            ListNode* nextNode=kNode->next;
            kNode->next=NULL;
            reverse(temp);
            if(temp==head)
            {
                head=kNode;
            }
            else
            {
                prev->next=kNode;
            }
            
            prev=temp;
            temp=nextNode;
            
        }
        return head;
    }
};