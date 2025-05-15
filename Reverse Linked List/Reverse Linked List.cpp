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
    ListNode* reverseList(ListNode* head) {
        ListNode *prevP=nullptr, *curr=head;

        while(curr){
            ListNode* temp=curr->next;
            curr->next=prevP;

            prevP=curr;
            curr=temp;
        }

        return prevP;
    }
};