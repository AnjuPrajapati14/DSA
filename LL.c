#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
struct node*createnode(int num){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=num;
    temp->link=NULL;
    return temp;
}

int main(){
    struct node*head=(struct node*)malloc(sizeof(struct node));
    struct node*temp1;
    struct node*temp2;          
    struct node*temp3;          
    head=temp1;
    head->data=45;
    head->link=NULL;
    temp2=createnode(5);
    temp3=createnode(3); 
    temp1->link=temp2;
    temp2->link=temp3;
    while(temp1!=NULL){
      
    printf("  %d ",temp1->data);
    temp1=temp1->link;
    }
   return 0;  
}