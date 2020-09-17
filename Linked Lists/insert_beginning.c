#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

struct node {
    int data;
    struct node *next;
}*head, *temp;

typedef struct node sn;
sn* head;

void insert_beg(int data){
    sn *newnode = (sn*)malloc(sizeof(sn));
    newnode->data = data;
    newnode->next=head;
    head=newnode;
}


void display()
{
temp=head;
while(temp){
    if(temp->next==NULL)printf("%d", temp->data);
    else printf("%d->", temp->data);
    temp=temp->next;
}}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int v;
        scanf("%d", &v);
        insert_beg(v);
    }
    display();
    return 0;
}
