1. In what ways is a binary tree similar to a linked list?

They are both collection of nodes with links to successor nodes.

2. A ternary tree is like a binary tree, except each node in a ternary tree may have three children: a left child, a middle child, and a right child. Write an analog of the TreeNode declaration that can be used to represent the nodes of a ternary tree.

```cpp
struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* middle;
    TreeNode* right;
    TreeNode(int value1,
            TreeNode* left1 = nullptr,
            TreeNode* middle1 = nullptr,
            TreeNode* right1 = nullptr)
    {
      value = value1;
      left = left1;
      middle = middle1;
      right = right1;
    }
};
```

3. Imagine a tree in which each node can have up to a hundred children. Write an analog of the TreeNode declaration that can be used to represent the nodes of such a tree. A declaration such as
   { struct TreeNode
   int value;
   TreeNode\* child1;
   TreeNode\* child2;
   TreeNode\* child3;
   . . .
   . . .
   . . .
   };
   that simply lists all the pointers to the hundred children is not acceptable.

```cpp
struct TreeNode
{
   int value;
   TreeNode* child[100];
   // TreeNode* child1;
   // TreeNode* child2;
   // TreeNode* child3;
}
```
