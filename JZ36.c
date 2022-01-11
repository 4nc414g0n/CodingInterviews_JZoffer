// 两个链表的第一个公共结点

struct ListNode *p=pHead1;
    struct ListNode *q=pHead2;

    while(p!=q)
    {
        p = p ? p->next : pHead2;
        q = q ? q->next : pHead1;
    }
    return p;