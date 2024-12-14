# Binary Trees Project

## Description
This project is about creating and working with binary trees. Tasks include creating, modifying, and traversing binary trees while following coding standards.

---

## Learned Concepts

### What is a binary tree?
A binary tree is a data structure where each node has at most two children:
- **Left child**
- **Right child**

### Differences between a binary tree and a Binary Search Tree (BST)
- **Binary Tree:** No specific order between node values.
- **Binary Search Tree (BST):** Each node follows the rule:
  - Values in the left subtree are smaller than the node.
  - Values in the right subtree are greater than the node.

### Why use binary trees?
Operations like search, insert, and delete are faster compared to linked lists, with an average time complexity of **O(log n)**.

### Properties of binary trees
- **Height:** Longest path from the root to a leaf.
- **Depth:** Distance from a node to the root.
- **Size:** Total number of nodes in the tree.

### Traversal methods
- **Pre-order:** Root -> Left -> Right.
  ```
  Example:
      1
     / \
    2   3
   Traversal: 1, 2, 3
  ```

- **In-order:** Left -> Root -> Right.
  ```
  Example:
      1
     / \
    2   3
   Traversal: 2, 1, 3
  ```

- **Post-order:** Left -> Right -> Root.
  ```
  Example:
      1
     / \
    2   3
   Traversal: 2, 3, 1
  ```

### Types of binary trees
- **Complete:** All levels are full except maybe the last one.
- **Full:** Each node has 0 or 2 children.
- **Perfect:** All levels are completely full.
- **Balanced:** Difference in height between left and right subtrees is at most 1.

---

## Tasks (detailed)

### 0. New Node
**Function:** `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)`

- Creates a new node in a binary tree.
- When created, the node has no children.
- **File:** `0-binary_tree_node.c`

**Compilation:**
```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
```

**Example:**
```c
binary_tree_t *root;
root = binary_tree_node(NULL, 98);
root->left = binary_tree_node(root, 12);
root->right = binary_tree_node(root, 402);
```
**Output:**
```
    .-------(098)--.
 (012)           (402)
```

### 1. Insert Left
**Function:** `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)`

- Inserts a node as the left child.
- If a left child exists, it is replaced by the new node.
- **File:** `1-binary_tree_insert_left.c`

**Compilation:**
```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o 1-left
```

**Example:**
```c
binary_tree_insert_left(root, 54);
```
**Output:**
```
  .--(098)--.
 (054)   (402)
```

### 2. Insert Right
**Function:** `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)`

- Inserts a node as the right child.
- If a right child exists, it is replaced by the new node.
- **File:** `2-binary_tree_insert_right.c`

**Compilation:**
```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 2-main.c 2-binary_tree_insert_right.c 0-binary_tree_node.c -o 2-right
```

**Example:**
```c
binary_tree_insert_right(root, 128);
```
**Output:**
```
  .--(098)--.
 (054)   (128)
```

### 3. Delete Tree
**Function:** `void binary_tree_delete(binary_tree_t *tree)`

- Deletes an entire binary tree.
- If the tree is empty, does nothing.
- **File:** `3-binary_tree_delete.c`

**Compilation:**
```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 3-main.c 3-binary_tree_delete.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 3-del
```

---

## Requirements
- All code written in C.
- **Compilation:**
  - Ubuntu 20.04 LTS
  - `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- Followed **Betty** coding style.
- Header file: `binary_trees.h`.
- No global variables allowed.
- Max 5 functions per file.

---

## Authors
- **Nazarena Aranda**: [nazarena-aranda](https://github.com/nazarena-aranda)
- **Brahian Amaral**: [Brahian-A](https://github.com/Brahian-A)

