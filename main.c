/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct abc
{
    int data;
    struct abc*next;
};
void main()
{ int n ;
  int data;
printf("enter the number of nodes :");
scanf("%d",&n);
struct abc*head,*new,*temp;
head=(struct abc*)malloc(sizeof(struct abc));
printf("enter data :");
scanf("%d",&data);
head-> data =data;
    head->next=NULL;
    temp=head;
    for(int i=0;i<n-1;i++)
    {
        new =(struct abc*)malloc(sizeof(struct abc));
        printf("enter data :");
        scanf("%d",&data);
        new->data=data;
        new->next=NULL;
        temp->next=new;
        temp=temp->next;
        
    }
    temp=head;
    {
    for( int i=0;i<n;i++)
{
    if(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
   
    }
   }
}
