/* 10:49 2015-04-09 Thursday */
#include <stdio.h>
#include <stdlib.h>
#include "head.h"

int main()
{
    char buf[] = {0,'a','b','c','d','e'};

    btree_t *btree = Create_BinaryTree(buf,1);

    PreOrder_Tree(btree);
    printf("\n");

    InOrder_Tree(btree);
    printf("\n");

    PostOrder_Tree(btree);
    printf("\n");
    return 0;
}
