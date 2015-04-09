/* 10:31 2015-04-09 Thursday */
#ifndef _HEAD_H_
#define _HEAD_H_

#define N 5
typedef char DATATYPE;

typedef struct bnode
{
    DATATYPE data;
    struct bnode *lchild;
    struct bnode *rchild;
}btree_t;

extern btree_t *Malloc_Bnode(DATATYPE data);
extern btree_t *Create_BinaryTree(char buf[],int num);
extern int PreOrder_Tree(btree_t *root);
extern int InOrder_Tree(btree_t *root);
extern int PostOrder_Tree(btree_t *root);

#endif
