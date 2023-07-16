#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node *top=0,*trav,*newnode;
void push(int x)
{
    newnode=malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
    }
    void display()
    {
        trav=top;
        if(top==0)
        printf("LL IS EMOTY ");
        else
        {while(trav!=0)
        {printf("%d",trav->data);
        trav=trav->next;}
            
        }
    }
    void peek(){
        trav=top;
        if(top==0)
        printf("LL IS EMPTY");
        else
        printf("%d",trav->data);
    }
    void pop(){
        trav=top;
        if(top==0)
        printf("LL is emoty");
        else
        {
            top=top->next;
            printf("%d",trav->data);
            free(trav);
            trav==0;
        }
    }
int main() {
    push(3);
    push(6);
    push(9);
    display();
    pop();
    display();
    return 0;
}
