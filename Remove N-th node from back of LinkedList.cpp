//Remove N-th node from back of LinkedList (Brute force approach)
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
        ListNode* dummy = head;
        int count=0;
        while(dummy!=NULL)
        {
            count++;
            dummy = dummy->next;
        }
        int diff=count-n;
        if(diff==0)
            return head->next;
        ListNode* t=head;
        for(int i=1;i<diff;i++)
            t=t->next;
        t->next=t->next->next;
        return head;   
    }
};


//Remove N-th node from back of LinkedList (Optimised approach)
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
        ListNode* dummy= new ListNode();
        dummy->next=head;
        ListNode* slw= dummy;
        ListNode* fst= dummy;
        for(int i=1;i<=n;i++)
            fst=fst->next;
        while(fst->next != NULL)
        {
            slw=slw->next;
            fst=fst->next;
        }
        slw->next=slw->next->next;
        return dummy->next;
    }
};
