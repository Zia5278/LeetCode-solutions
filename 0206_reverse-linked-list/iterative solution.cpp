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
        
        // iterative
        
        //finding length
        ListNode* temp = head;
        int n = 0;
        while (temp != nullptr){
            temp = temp -> next;
            n++;
        }

        //reversing
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        for (int i=0; i<n/2; i++){

            // bringing temp1 to the right node
            for (int j=0; j<n-i-1; j++){
                temp2 = temp2 -> next;
            }

            //swapping temp1(right node) with temp2(left node)
            int temp_val = temp2->val;
            temp2->val = temp1->val;
            temp1->val = temp_val;

            //preparing for next iteration
            temp1 = temp1 -> next;
            temp2 = head;

        }

        return head;

    }
};