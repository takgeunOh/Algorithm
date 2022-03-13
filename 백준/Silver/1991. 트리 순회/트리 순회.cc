#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

/*
7
A B C
B D .
C E F
E . .
F . G
D . .
G . .
*/

typedef struct node
{
    char id;
    struct node* left;
    struct node* right;
}NODE;

NODE* getnode(char id);
NODE* makeTree(char id, char l_child_id, char r_child_id, char **arr, int N);
void printTree(NODE* v);
void preorderSuccessor(NODE* v);
void inorderSuccessor(NODE* v);
void postorderSuccessor(NODE* v);
void freeTree(NODE* v);

int main()
{
    int N;
    char **arr;
    int i,j;
    int root_index=0;
    int flag=0;
    NODE* root=NULL;
    
    scanf("%d", &N);
    getchar();
    arr = (char**)malloc(N*sizeof(char*));
    for(i=0;i<N;i++)
        arr[i]=(char*)malloc(3*sizeof(char));
    
    for(i=0;i<N;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%c", &arr[i][j]);
            getchar();
        }
    }
    
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(arr[i][0]==arr[j][1] || arr[i][0]==arr[j][2])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            root_index=i;
            break;
        }
        flag=0;
    }
    
    root = makeTree(arr[root_index][0], arr[root_index][1], arr[root_index][2], arr, N);
    
    //printTree(root);
    
    preorderSuccessor(root);
    printf("\n");
    inorderSuccessor(root);
    printf("\n");
    postorderSuccessor(root);
    printf("\n");
    
    for(i=0;i<N;i++)
        free(arr[i]);
    free(arr);
    
    freeTree(root);
}

NODE* makeTree(char id, char l_child_id, char r_child_id, char **arr, int N)
{
    NODE* v=NULL;
    int i;
    int index=0;
    
    v = getnode(id);
    
    if(l_child_id!='.')
    {
        for(i=0;i<N;i++)
        {
            if(l_child_id==arr[i][0])
            {
                index=i;
                break;
            }
        }
        v->left = makeTree(arr[index][0], arr[index][1], arr[index][2], arr, N);
    }
    else
        v->left=NULL;
    
    if(r_child_id!='.')
    {
        for(i=0;i<N;i++)
        {
            if(r_child_id==arr[i][0])
            {
                index=i;
                break;
            }
        }
        v->right=makeTree(arr[index][0], arr[index][1], arr[index][2], arr, N);
    }
    
    return v;
}

NODE* getnode(char id)
{
    NODE* newnode=(NODE*)malloc(sizeof(NODE));
    
    newnode->id = id;
    newnode->left=NULL;
    newnode->right=NULL;
    
    return newnode;
}

void printTree(NODE* v)
{
    if(v==NULL)
        return;
    
    printf("%c", v->id);
    printTree(v->left);
    printTree(v->right);
}

void preorderSuccessor(NODE* v)
{
    if(v==NULL)
        return;
    
    printf("%c", v->id);
    preorderSuccessor(v->left);
    preorderSuccessor(v->right);
}

void inorderSuccessor(NODE* v)
{
    if(v==NULL)
        return;
    
    inorderSuccessor(v->left);
    printf("%c", v->id);
    inorderSuccessor(v->right);
}

void postorderSuccessor(NODE* v)
{
    if(v==NULL)
        return;
    
    postorderSuccessor(v->left);
    postorderSuccessor(v->right);
    printf("%c", v->id);
}

void freeTree(NODE* v)
{
    if(v==NULL)
        return;
    
    freeTree(v->left);
    freeTree(v->right);
    free(v);
}
