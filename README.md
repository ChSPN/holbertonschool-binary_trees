# Binary trees exercises
***

## Table of Contents
***
1. General Infos
2. List of Exercises
3. File Structure
4. Compilation

## General Infos
***
This repository contains exercises done as part of a training by Holberton School on binary trees in the C language. The project is a collaborative effort between Tanguy MOREAU and Charlène SCOMPARIN.

## List of Exercises
***
### Mantory tasks
0. **binary_tree_node**: Creates a new node in a binary tree.
1. **binary_tree_insert_left**: Inserts a node to the left of a given node in a binary tree.
2. **binary_tree_insert_right**: Inserts a node to the right of a given node in a binary tree.
3. **binary_tree_delete**: Deletes a binary tree.
4. **binary_tree_is_leaf**: Checks if a node is a leaf in a binary tree.
5. **binary_tree_is_root**: Checks if a node is the root of a binary tree.
6. **binary_tree_preorder**: Traverses a binary tree using preorder traversal.
7. **binary_tree_inorder**: Traverses a binary tree using inorder traversal.
8. **binary_tree_postorder**: Traverses a binary tree using postorder traversal.
9. **binary_tree_height**: Calculates the height of a binary tree.
10. **binary_tree_depth**: Measures the depth of a node in a binary tree.
11. **binary_tree_size**: Measures the size of a binary tree.
12. **binary_tree_leaves**: Counts the leaves in a binary tree.
13. **binary_tree_nodes**: Counts the nodes with at least 1 child in a binary tree.
14. **binary_tree_balance**: Calculates the balance factor of a binary tree.
15. **binary_tree_is_full**: Checks if a binary tree is full.
16. **binary_tree_is_perfect**: Checks if a binary tree is perfect.
17. **binary_tree_sibling**: Finds the sibling of a node in a binary tree.
18. **binary_tree_uncle**: Finds the uncle of a node in a binary tree.

### Advanced tasks
19. **binary_trees_ancestor**: Finds the lowest common ancestor of two nodes in a binary tree.
20. **binary_tree_levelorder**: Traverses a binary tree using level-order traversal.
21. **binary_tree_is_complete**: Checks if a binary tree is complete.
22. **binary_tree_rotate_left**: Performs a left-rotation on a binary tree.
23. **binary_tree_rotate_right**: performs a right-rotation on a binary tree.
24. **binary_tree_is_bst**: Checks if a binary tree is a valid Binary Search Tree.
25. **bst_insert**: Inserts a value in a Binary Search Tree.

## File Structure
***
Each exercise is accompanied by several files:

- An example file `main.c` illustrating the usage of the corresponding function.
- A source file `.c` containing the implementation of the function.
- A header file `.h` containing the prototype of the function.


## Compilation
***
To compile an exercise, you can use gcc with the following options:

gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c main.c <exercise_file>.c -o <executable_name>

### Technologies
* development environment : Visual Studio Code with Windows
* framework : C language
*libraries: <stdlib.h> ; <stdio.h> ; <stddef.h> ; "binary_trees.h"

### Prerequirements
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project, is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the standard library
* We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called binary_trees.h
* Don’t forget to push your header file
* All your header files should be include guarded
