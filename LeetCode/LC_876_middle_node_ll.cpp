#include <iostream>
#include <vector>
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
    int nodeCount(ListNode* head){
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }
        return count;
    }

    ListNode* middleNode(ListNode* head) {
        int n = nodeCount(head);
        ListNode* temp = head;
        for(int i = 0; i < n/2; i++){
            temp = temp->next;
        }
        return temp;
    }
};

int main(){
    
    return 0;
}