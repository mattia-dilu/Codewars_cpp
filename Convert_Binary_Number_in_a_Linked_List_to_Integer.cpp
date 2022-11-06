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
    int size(const ListNode* head){
        if(head == nullptr) return 0;
        return size(head->next) + 1;
    }
    int getDecimalValue(ListNode* head) {
        ListNode* node = head;
        int decimal = 0;
        int n = size(head)-1;
        while(node != nullptr){
            if(node->val == 1)
                decimal += pow(2, n);
            node = node->next;
            n--;
        }
        return decimal;
    }
};
