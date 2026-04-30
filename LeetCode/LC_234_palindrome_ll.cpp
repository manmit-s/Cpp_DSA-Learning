#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> ll;
        // ListNode *first = head;
        ListNode *last = head;
        bool flag = true;
        while(last->next){
            ll.push_back(last->val);
            last = last->next;
        }
        ll.push_back(last->val);
        
        int s = 0, e = ll.size() - 1;
        while(s <= e){
            if(ll[s] != ll[e]){
                flag = false;
                break;
            }
            s++; e--;
        }
        return flag ? true : false;

        // while(last->next == first || last == first){
        //     if(first->val == last->val){
        //         first = 
        //     }
        // }
    }
};

int main(){
    
    return 0;
}