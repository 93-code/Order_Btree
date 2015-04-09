/* 10:38 2015-04-09 Thursday */
#include <stdio.h>
#include <stdlib.h>
#include "head.h"

btree_t *Malloc_Bnode(DATATYPE data)
{
    btree_t *tree;
    tree = (btree_t *)malloc(sizeof(btree_t));
    tree->data =data;
    tree->lchild = tree->rchild = NULL;

    return tree;
}

btree_t *Create_BinaryTree(char buf[],int num)
{
    btree_t *root;
    root = Malloc_Bnode(buf[num]);

    if (2*num <= N)
    {
        root->lchild = Create_BinaryTree(buf,2*num);
    }

    if (2*num+1 <= N)
    {
        root->rchild = Create_BinaryTree(buf,2*num+1);
    }

    return root;
}

int PreOrder_Tree(btree_t *root)
{
    if (NULL == root)
        return 0;

    printf("%c ",root->data);
    PreOrder_Tree(root->lchild);
    PreOrder_Tree(root->rchild);

    return 1;
}

int InOrder_Tree(btree_t *root)
{
    if (NULL == root)
        return 0;
    InOrder_Tree(root->lchild);
    printf("%c ",root->data);
    InOrder_Tree(root->rchild);

    return 1;
}

int PostOrder_Tree(btree_t *root)
{
    if (NULL == root)
        return 0;
    PostOrder_Tree(root->lchild);
    PostOrder_Tree(root->rchild);
    printf("%c ",root->data);

    return 1;
}
