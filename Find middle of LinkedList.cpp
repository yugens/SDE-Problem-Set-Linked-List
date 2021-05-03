//Find middle of LinkedList (Brute force approach)
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
        ListNode *temp = new ListNode;
        temp=head;
        int count=0;
        while(temp->next !=NULL)
        {
            count++;
            temp = temp->next;
        }
        temp=head;
        count+=1;
        for(int i=0;i<count/2;i++)
        {
            temp=temp->next;
        }
        return temp;
        
    }
};

//Find middle of LinkedList (Optimised approach)
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
        ListNode *slow=head ;
        ListNode *fast=head;
        while(fast != NULL and fast->next != NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
        
    }
};
