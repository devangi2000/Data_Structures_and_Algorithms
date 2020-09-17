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

void insert_end(int data){
    sn *newnode = (sn*)malloc(sizeof(sn));
    newnode->data = data;
    newnode->next=NULL;
    if(head==NULL)head=newnode;
    else{
        temp=head;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}



void search(int d)
{
temp=head;
    int f=0;
while(temp){
    if(temp->data==d){f=1; break;}
    temp=temp->next;
}
if(f==0)printf("no");
    else printf("yes");
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int v;
        scanf("%d", &v);
        insert_end(v);
    }
    int d;
    scanf("%d", &d);
    search(d);
    //display();
    return 0;
}
