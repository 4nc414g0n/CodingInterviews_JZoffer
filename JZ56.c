/*删除链表中重复的结点
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead) {
        if(pHead==NULL||pHead->next==NULL)
            return pHead;
        ListNode* newhead=(ListNode*)malloc(sizeof(ListNode));
//         newhead->next=pHead;
        ListNode* prev=newhead;
        ListNode* cur=pHead;
        ListNode* latter;
        while(cur&&cur->next)
        {
            latter=cur->next;
            if(latter->val==cur->val)
            {
                while(latter->val==cur->val&&latter!=NULL)
                {
                    latter=latter->next;
                }
                prev->next=latter;
                cur=latter;
            }
            else
            {
                prev->next=cur;//可要可不要，加上更容易理解
                prev=cur;
                cur=latter;
            }
        }
        return newhead->next;
    }
};