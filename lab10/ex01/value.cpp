struct ListNode
{
    double value;
    ListNode *next;
    ListNode(double value1, ListNode *next1 = nullptr)
    {
        value = value1;
        next = next1;
    }
};
ListNode *p = new ListNode(56.4);
p = new ListNode(34.2, p);
cout << (*p).value << endl
     << p->value;