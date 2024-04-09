#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>

/*DATA STRUCTURES AND TYPES FOR BINARY TREES*/

/*Basic binary tree*/
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/*Binary Search Tree*/
typedef struct binary_tree_s bst_t;

/*AVL Tree*/
typedef struct binary_tree_s avl_t;

/*Max Binary Heap*/
typedef struct binary_tree_s heap_t;


/*PROTOTYPES*/
void binary_tree_print(const binary_tree_t *tree); /*pour la fonction binary_tree_print*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);/*task 0*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);/*task 1*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);/*task 2*/

void binary_tree_delete(binary_tree_t *tree);/*task 3*/

int binary_tree_is_leaf(const binary_tree_t *node);/*task 4*/

int binary_tree_is_root(const binary_tree_t *node);/*task 5*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));/*task 6*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));/*task 7*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));/*task 8*/

size_t binary_tree_height(const binary_tree_t *tree);/*task 9*/

size_t binary_tree_depth(const binary_tree_t *tree);/*task 10*/

size_t binary_tree_size(const binary_tree_t *tree);/*task 11*/

size_t binary_tree_leaves(const binary_tree_t *tree);/*task 12*/

size_t binary_tree_nodes(const binary_tree_t *tree);/*task 13*/

int binary_tree_balance(const binary_tree_t *tree);/*task 14*/

int binary_tree_is_full(const binary_tree_t *tree);/*task 15*/

int binary_tree_is_perfect(const binary_tree_t *tree);/*task 16*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node);/*task 17*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node);/*task 18*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

int binary_tree_is_complete(const binary_tree_t *tree);/*task 21*/

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);/*task 22*/

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);/*task 23*/

int binary_tree_is_bst(const binary_tree_t *tree);/*task 24*/

bst_t *bst_insert(bst_t **tree, int value);/*task 25*/

bst_t *array_to_bst(int *array, size_t size);/*task 26*/

bst_t *bst_search(const bst_t *tree, int value);/*task 27*/

bst_t *bst_search(const bst_t *tree, int value);/*task 28*/

bst_t *bst_remove(bst_t *root, int value);/*task 29*/

int binary_tree_is_avl(const binary_tree_t *tree);/*task 31*/

avl_t *avl_insert(avl_t **tree, int value);/*task 32*/

avl_t *array_to_avl(int *array, size_t size);/*task 33*/

avl_t *avl_remove(avl_t *root, int value);/*task 34*/

avl_t *sorted_array_to_avl(int *array, size_t size);/*task 35*/

int binary_tree_is_heap(const binary_tree_t *tree);/*task 37*/

heap_t *heap_insert(heap_t **root, int value);/*task 38*/

heap_t *array_to_heap(int *array, size_t size);/*task 39*/

int heap_extract(heap_t **root);/*task 40*/

int *heap_to_sorted_array(heap_t *heap, size_t *size);/*task 41*/



#endif /* BINARY_TREES_H */