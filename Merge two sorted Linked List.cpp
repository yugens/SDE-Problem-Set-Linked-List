//Merge two sorted Linked List (Brute force approach)
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
      ListNode* temp1 =l1;
      ListNode* temp2 =l2;
      ListNode* dummy = new ListNode(-1);
      ListNode *ptr = dummy;
      while(temp1!=NULL and temp2!=NULL)
      {
          if(temp1->val < temp2->val)
          {
              ptr->next = temp1;
              temp1 = temp1->next;
          }
          else
          {
              ptr-> next = temp2;
              temp2 = temp2->next;
          }
          ptr = ptr->next;
      }
      while(temp1)
      {
          ptr->next = temp1;
          temp1= temp1-> next;
          ptr = ptr-> next;
      }
        while(temp2)
        {
            ptr-> next = temp2;
            temp2 = temp2-> next;
            ptr = ptr-> next;
        }
        return dummy->next;
    }
};

//Merge two sorted Linked List (Optimised approach) 
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
      if(l1==NULL)
          return l2;
      if(l2==NULL)
          return l1;
      if(l1->val > l2-> val)
         std::swap(l1,l2);
      ListNode* res = l1;
      while(l1!=NULL and l2!=NULL)
      {
        ListNode* temp = NULL;
        while(l1!=NULL and l1->val <= l2->val)
        {
            temp=l1;
            l1=l1->next;
        }
          temp->next=l2;
          std::swap(l1,l2);
      }
       return res; 
    }
};
