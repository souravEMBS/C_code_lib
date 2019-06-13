#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
} bNode;

bNode* addChild(bNode* root, int value);
bNode* getNewNode(int value);
void print2DUtil(bNode* root, int space) ;
void print2D(bNode* root);
bool findNode(bNode* root, int value);

int main(int argc, char const *argv[])
{
    /* code */
    bNode* rootPtr;
    rootPtr = NULL;
    rootPtr = addChild(rootPtr,15);
    rootPtr = addChild(rootPtr,10);
    rootPtr = addChild(rootPtr,20);
    rootPtr = addChild(rootPtr,25);
    rootPtr = addChild(rootPtr,8);
    rootPtr = addChild(rootPtr,12);
    rootPtr = addChild(rootPtr,7);
    rootPtr = addChild(rootPtr,23);
    int number;
    printf("Enter a number to search: \n");
    scanf("%d",&number);
    if(findNode(rootPtr, number) == true) printf("Found number\n");
    else printf("Number not found\n");
    print2D(rootPtr);

    return 0;
}

bNode* addChild(bNode* root, int value){
    if(root == NULL){
        root = getNewNode(value);
    }
    else if(value <= root->data){
        root->left = addChild(root->left,value);
    }
    else{
        root->right = addChild(root->right,value);
    }
    return root;
}

bNode* getNewNode(int value){
    bNode* newNode = (bNode *)malloc(sizeof(bNode));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

bool findNode(bNode* root, int value){
    if(root ==NULL) return false;
    if(root->data == value ) return true;
    else if(value <= root->data) return findNode(root->left,value);
    else return findNode(root->right,value);
}

void print2DUtil(bNode* root, int space) 
{ 
    if (root == NULL) 
        return; 
  
    space += 10;  
    print2DUtil(root->right, space); 
    printf("\n"); 
    for (int i = 10; i < space; i++) 
        printf(" "); 
    printf("%d\n", root->data); 
    print2DUtil(root->left, space); 
} 
  
void print2D(bNode* root) 
{ 
   print2DUtil(root, 0); 
}