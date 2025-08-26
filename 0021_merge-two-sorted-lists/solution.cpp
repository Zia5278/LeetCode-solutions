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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr){return list2;}
        if (list2 == nullptr){return list1;} //base case for stopping as well as for a boundary value (for boundary value it doesn't matter what you return, we just wanna stop recursion)

        if (list1->val > list2->val){
            
            // swapping their names cuz my sol is starting from list1
            ListNode* temp = list1;
            list1 = list2;
            list2 = temp;
        }

        if (list1->next == nullptr){
            ListNode* temp1 = list1->next;
            list1->next = list2;
            ListNode* temp2 = list2->next;
            list2->next = temp1;
            list2 = temp2;
            mergeTwoLists(list1->next, list2);
        }

        else if (list1->next->val >= list2->val){
            ListNode* temp1 = list1->next;
            list1->next = list2;
            ListNode* temp2 = list2->next;
            list2->next = temp1;
            list2 = temp2;
            mergeTwoLists(list1->next, list2);
        }
        else
            mergeTwoLists(list1->next, list2);

        return list1; 
    }
};