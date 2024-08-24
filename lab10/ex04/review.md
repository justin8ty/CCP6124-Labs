1. Using the ListNode structure introduced in the section 1, write a function void printFirst(ListNode\* ptr) that prints the value stored in the first node of a list passed to it as parameter. The function should print an error message and terminate the program if the list passed to it is empty.

```
void printFirst(ListNode* ptr)
{
    if( !ptr )
    {
        cout << "Error";
        exit(1);
    }
    cout << ptr->value << endl;
}
```

2. Write a function void printSecond(ListNode\* ptr) that prints the value stored in the second node of a list passed to i as parameter. The function should print an error message and terminat the program if the list passed to it has less than two nodes.

```
void pritnSecond(ListNode* ptr)
{
    if( !ptr || !ptr->next)
    {
        cout << "Error";
        exit(1);
    }
    cout << ptr->next->value << endl;
}
```

3. Write a recursive function double lastValue(ListNode\* ptr) that returns the value stored in the last node of a nonempty list passed to it as parameter. The function should print an error message and terminate the program if the list passed to it is empty.

```
double lastValue(ListNode* ptr)
{
    if( !ptr || !ptr->next)
    {
        cout << "Error";
        exit(1);
    }
    if( ptr->next == nullptr )
        return ptr->value;
    else
        return lastValue(ptr->next)
}
```

4. Write a function ListNode* removeFirst(ListNode* ptr) that is passed a linked list as parameter and returns the tail of the list: That is, it removes the first node and returns what is left. The function should deallocate the storage of the removed node. The function returns nullptr if the list passed to it is empty.

```
ListNode* removeFirst(ListNode* ptr)
{
    if( ptr == nullptr)
        return nullptr;
    ListNode* first = ptr;
    ptr = ptr->next;
    delete first;
    return ptr;
}
```

5. Write a function ListNode* ListConcat(ListNode* list1, ListNode\* list2) that concatenates the items in list2 to the end of list1 and returns the resulting list.

```
ListNode* ListConcat(ListNode* list1, ListNode* list2)
{
    if( list1 == nullptr)
        return list2;
    ListNode* ptr = list1;
    while( ptr->next != nullptr )
        ptr = ptr->next;
    ptr->next = list2;
    return list1;
}
```
