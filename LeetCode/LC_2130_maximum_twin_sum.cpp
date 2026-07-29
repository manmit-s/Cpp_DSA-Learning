#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast= head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *mid = slow;

        ListNode *prev = NULL;
        ListNode *next = NULL;
        while(mid){
            next = mid->next;
            mid->next = prev;
            prev = mid;
            mid = next;
        }

        int res = 0;
        ListNode *curr = head;
        while(prev){
            res = max(res, curr->val + prev->val);
            prev = prev->next;
            curr = curr->next;
        }
        return res;
    }
};

int main(){
    
    return 0;
}