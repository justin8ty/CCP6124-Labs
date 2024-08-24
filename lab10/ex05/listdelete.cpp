#include <iostream>
#include <string>
using namespace std;

class LinkedList
{
protected:
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

private:
    ListNode *head;

public:
    LinkedList() { head = nullptr; }    // Constructor
    ~LinkedList();                      // Destructor
    LinkedList(const LinkedList &list); // Copy constructor
    void add(double value);
    void remove(double value);
    void print() const;
    bool isMember(double x) const;
};

bool LinkedList::isMember(double x) const
{
    ListNode *nodePtr = head;
    while (nodePtr != nullptr)
    {
        if (nodePtr->value == x)
        {
            return true;
        }
        nodePtr = nodePtr->next;
    }
    return false;
}

void LinkedList::add(double x)
{
    ListNode *newNode = new ListNode(x);
    newNode->next = head;
    head = newNode;
}

LinkedList::LinkedList(const LinkedList &list2)
{
    if (list2.head == nullptr)
    {
        head = nullptr;
        return;
    }
    else
    {
        head = new ListNode(list2.head->value);
        ListNode *list10bj = head;
        ListNode *nodeCopy = list2.head->next;
        while (nodeCopy != nullptr)
        {
            list10bj->next = new ListNode(nodeCopy->value);
            list10bj = list10bj->next;
            nodeCopy = nodeCopy->next;
        }
    }
}

void LinkedList::remove(double value)
{
    ListNode *nodePtr, *previousNodePtr;

    if (!head)
        return; // If the list is empty, do nothing

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

        if (nodePtr)
        {
            previousNodePtr->next = nodePtr->next;
            delete nodePtr;
        }
    }
}

void LinkedList::print() const
{
    ListNode *nodePtr = head;
    while (nodePtr)
    {
        cout << nodePtr->value << "    ";
        nodePtr = nodePtr->next;
    }
    cout << endl;
}

LinkedList::~LinkedList()
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
    LinkedList list;

    // Add some items
    list.add(1.1);
    list.add(2.2);
    list.add(3.3);
    list.add(4.4);
    list.add(5.5);

    cout << "Initial list:\n";
    list.print();

    // Remove an item
    cout << "Removing 3.3 from the list.\n";
    list.remove(3.3);
    list.print();

    // Add more items
    cout << "Adding 6.6 and 7.7 to the list.\n";
    list.add(6.6);
    list.add(7.7);
    list.print();

    // Remove another item
    cout << "Removing 1.1 from the list.\n";
    list.remove(1.1);
    list.print();

    // Check membership
    double checkVal = 2.2;
    if (list.isMember(checkVal))
    {
        cout << "Member value " << checkVal << " is found in the linked list.\n";
    }
    else
    {
        cout << "Member value " << checkVal << " is not found in the linked list.\n";
    }

    checkVal = 3.3;
    if (list.isMember(checkVal))
    {
        cout << "Member value " << checkVal << " is found in the linked list.\n";
    }
    else
    {
        cout << "Member value " << checkVal << " is not found in the linked list.\n";
    }

    return 0;
}