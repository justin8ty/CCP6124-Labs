void add(double x);

boolean isMember(double x);
{
    return false;
}

void Linkedlist::add(double x)
{
    ListNode *newNode = new ListNode(x);
}

void Linkedlist::remove(double x)
{
    ListNode *newNode = new ListNode(x);
}

Linkedlist::LinkedList(LinkedList &list2)
{
    head = new ListNode(list2.head->value);
    ListNode *listObj = head;
    ListNode *nodeCopy != nullptr;
    while (nodeCopy != nullptr)
    {
        list1Obj->next = new ListNode(nodeCopy->value);
        listObj = listObj->next;
        nodeCopy = nodeCopy->next;
    }

    {
    }
}

~Linkedlist();

int main()
{
    LinkedList list;

    list.add(1.1);
    list.add(2.2);
    list.add(5.5);
    list.add(6.6);

    cout << "\n DIY ";
}

#include <iostream>
#include <string>
using namespace std;
template <class T>
class LinkedList
{
protected:
    struct ListNode
    {
        T value;
        ListNode *next;
        ListNode(T value1, ListNode *next1 = nullptr)
        {
            value = value1;
            next = next1;
        }
    };
    ListNode *head;

public:
    LinkedList() { head = nullptr; } // Constructor
    ~LinkedList();                   // Destructor

    void remove(T value);
    void print() const;
    void add(T value);
    void displayList() const;
};
template <class T>
void LinkedList<T>::add(T value)
{
    if (head == nullptr)
        head = new ListNode(value);
    else
    {
        // The list is not empty
        ListNode *nodePtr = head;
        while (nodePtr->next != nullptr)
            nodePtr = nodePtr->next;
        // Create a new node and put it after the last node
        nodePtr->next = new ListNode(value);
    }
}
template <class T>
void LinkedList<T>::remove(T value)
{
    ListNode *nodePtr, *previousNodePtr;
    // If the list is empty, do nothing
    if (!head)
        return;
    // Determine if the first node is the one to delete
    if (head->value == value)
    {
        nodePtr = head;
        head = head->next;
        delete nodePtr;
    }
    else
    {
        nodePtr = head;
        while (nodePtr != nullptr && nodePtr->value != value)
        {
            previousNodePtr = nodePtr;
            nodePtr = nodePtr->next;
        }
        // Link the previous node to the node after nodePtr
        // then delete nodePtr
        if (nodePtr)
        {
            previousNodePtr->next = nodePtr->next;
            delete nodePtr;
        }
    }
}
template <class T>
void LinkedList<T>::displayList() const
{
    ListNode *nodePtr = head;
    while (nodePtr)
    {
        cout << nodePtr->value << " ";
        nodePtr = nodePtr->next;
    }
}
template <class T>
LinkedList<T>::~LinkedList()
{
    ListNode *nodePtr = head; // Start at head of list
    while (nodePtr != nullptr)
    {
        ListNode *garbage = nodePtr;
        nodePtr = nodePtr->next;
        delete garbage;
    }
}
int main()
{
    LinkedList<string> list;
    list.add("A");
    list.add("C");
    list.add("E");
    list.add("F");
    cout << "Here are the initial names:\n";
    list.displayList();
    cout << "\n\n";
    cout << "Now removing E.\n\n";
    list.remove("E");
    cout << "Here are the remaining elements.\n";
    list.displayList();
    cout << endl;
    return 0;
}