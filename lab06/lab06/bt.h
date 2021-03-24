#ifndef BINARYTREE
#define BINARYTREE

#define MAXPRINTBUFFER 500

typedef enum {
    PREORDER,
    INORDER,
    POSTORDER
    } TreeOrder;

typedef struct Node_tag {
    struct Node_tag * left;
    struct Node_tag * right;
    int data;
} BTNode;

typedef struct BinaryTree {
    BTNode* root;
    int size;
} BinaryTree;

/* typdef void (*traversal)(BTNode*, char*);

traversal ftable[3]; */

void (*ftable[3]) (BTNode* bt, char* p);

extern BinaryTree* createBinaryTree();
extern void insertInBinaryTree( BinaryTree*, int );
extern char* toStringBinaryTree( BinaryTree*, TreeOrder );
extern void initializeBinaryTree();

#endif
