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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l;
        int sum1=0;
        int sum2=0;
        int i = 0;
        while(l1->next){
            sum1 +=  (l1->val)*(pow(10,i));
            ++i;
            l1 = l1->next;
        }
        sum1 +=  (l1->val)*(pow(10,i));
        i = 0;
        while(l2->next){
            sum2 += (l2->val)*(pow(10,i));
                ++i;
        }
        int j=1;
        sum2 += (l2->val)*(pow(10,i));
        sum1 += sum2;
        while(!sum1){
        sum2 = sum1%pow(10,j);
        sum1/=pow(10,j);
        ++j;
            l->val = sum2;
            l = l->next;
        }
    }
};
