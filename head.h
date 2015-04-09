/* 10:31 2015-04-09 Thursday */
#ifndef _HEAD_H_
#define _HEAD_H_

#define N 5

typedef struct bnode
{
    char data;
    struct bnode *lchild;
    struct bnode *rchild;
}btree_t;
typedef btree_t * DATATYPE;



//链表节点的类型
typedef struct node 
{
    DATATYPE data;
    struct node *next;
}LinkNode;

typedef struct 
{
    LinkNode *front;
    LinkNode *rear;
}LinkQueue;

extern LinkQueue *create_linkqueue();
extern int is_empty_linkqueue(LinkQueue *q);
extern int enter_linkqueue(LinkQueue *q,DATATYPE data);
extern DATATYPE delete_linkqueue(LinkQueue *q);
///////////////////////////////////////////////////////////////////

extern btree_t *Malloc_Bnode(char data);
extern btree_t *Create_BinaryTree(char buf[],int num);
extern int PreOrder_Tree(btree_t *root);
extern int InOrder_Tree(btree_t *root);
extern int PostOrder_Tree(btree_t *root);
extern int Level_Tree(btree_t *root);

#endif
