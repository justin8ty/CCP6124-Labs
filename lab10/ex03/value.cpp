ListNode *p = new ListNode(56.4, new ListNode(31.5));
ListNode *q = p;
while (q->next->next != nullptr)
    q = q->next;
cout << q->value;