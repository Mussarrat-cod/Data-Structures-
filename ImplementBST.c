#include<stdio.h>
#include<stdlib.h>

struct node 
{
    struct node *left;
    struct node *right;
    int value;
};
struct node *root;
struct node *insert (struct node *r, int data);
struct node *search(struct node **tree, int val);
void inorder(struct node *r);
void preorder(struct node *r);
void postorder(struct node *r);

int main()
{
    int i, key,ch,dat,n;
    struct node *tmp;
    root =NULL;
    printf("BST");
    printf("Enter number of nodes");
    scanf("%d", &n);
    do{
    printf("1. CREATE \n 2.SEARCH \n 3.TRAVERSE \n 4.Exit \n");
    printf("Enter choice");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1:
        for(i=0;i<n;i++)
        {
            printf("Enter data ");
            scanf("%d",&dat);
            root=insert(root, dat);
        }
        break;
        
        case 2:
        printf( " Enter elemnt to search");
        scanf("%d", &key);
        tmp=search(&root, key);
        if(tmp)
        {
            printf("FOUND %d", tmp->value);
        }
        else
        {
            printf("NOT FOUND");
        }
        break;
        case 3:
        if(root==NULL)
        {
            printf("NOT POSSIBLE");
        }
        else
        {
            printf("INORDER");
            inorder(root);
            printf("PREORDER");
            preorder(root);
            printf("POSTORDER");
            postorder(root);
            
        }
        break;
        default:
        
    }
    }while (ch!=4);
}

struct node *insert(struct node *root, int data)
{
    if(root==NULL)
    {
        root=(struct node*)malloc(sizeof(struct node));
        root->left=NULL;
        root->right=NULL;
        root->value=data;
    }
   else if(data<root->value)
    {
        root->left=insert(root->left, data);
    }
    else
    {
        root->right=insert(root->right,data);
    }
    return root;
}

struct node *search(struct node **tree, int val)
{
    if(!(*tree))
    {
        return NULL;
    }
    if(val<(*tree)->value)
    {
         return search(&(*tree)->left,val);
    }
    else if(val>(*tree)->value)
    {
        return search(&(*tree)->right,val);
    }
    else if(val==(*tree)->value)
    {
        return *tree;
    }
}

void inorder(struct node *r)
{
    if(r!=NULL)
    {
        
    
    inorder(r->left);
    printf("%d\t", r->value);
    inorder(r->right);
}}

void postorder(struct node *r)
{
    if(r!=NULL)
    {
         postorder(r->left);
    postorder(r->right);
    printf("%d\t", r->value);
        
    }
   
}

void preorder(struct node *r)
{
     if(r!=NULL)
     {
           printf("%d\t", r->value);
    preorder(r->left);
    preorder(r->right);
     }
  
}
