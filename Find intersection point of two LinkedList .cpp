//Time complexity : o(n2) and space complexity : o(n)
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *temp=headA;
    while(headB!=NULL){
        while(headA!=NULL){
            if(headA==headB) return headA;
            headA=headA->next;
        }
        headA=temp;
        headB=headB->next;
    }
    return NULL;
}

//Time complexity : o(n) and space complexity : o(n)
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    map<ListNode*,int>m;
    ListNode* tempa=headA;
        ListNode* ans=NULL;
        while(tempa)
        {
            m[tempa]++;
            tempa=tempa->next;
        }
        ListNode* tempb=headB;
        while(tempb)
        {
            if(m[tempb]>0)
            {
                ans=tempb;
                break;
            }
            tempb=tempb->next;
        }
        return ans;
    }
};

// I will be initializing two pointers a and b  at the headA and  headB.
// after that will traverse through each the lists,one node at a time.
// When poinyer -a reaches the end of a list, then we need to redirect it to the headB.
// similarly when pointer -b reaches the end of a list, redirect it the headB.
// this will make both the pointer a nd b now be at equal distance from each , after this when they will we move will easily detect the intersection point.
// mow at any node a meets b, then it is the intersection node.
// And if there is no intersection node it returns NULL.

// T.C. : o(n) and S.C. : o(1)
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
        ListNode* a=headA;
        ListNode* b=headB;
        if(headA==NULL or headB==NULL)
            return NULL;
        while(a!=b)
        {
            if(a==NULL)
                a=headB;
            else
                a=a->next;
            if(b==NULL)
                b=headA;
            else
                b=b->next;
        }
        return b;
    }
};
