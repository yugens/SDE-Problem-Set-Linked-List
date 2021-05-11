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
