//Used hashing having time complexity o(n) and space complexity o(n)
class Solution {
public:
    bool hasCycle(struct ListNode* head) {
        unordered_set<ListNode*> s;
    while(head != NULL){
      if(s.find(head) != s.end()) return true;
      s.insert(head); head=head->next;
    }
      return false;
    }
};


//Time complexity o(n) and space complexity o(1)
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
                
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow) return true;
        }
        
        return false;
    }
};
