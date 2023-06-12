#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *head;

void InsertBeg(int n){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = n;
    if(head == NULL){
        head = temp;
        head->link = NULL;
    }
    else{
        temp->link = head;
        head = temp;
    }
}

void InsertEnd(int n){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = n;
    if(head == NULL){
        temp->link = NULL;
        head = temp;
    }
    else{
        temp->link = NULL;
        struct node *temp2;
        temp2 = head;
        while(temp2->link != NULL)
        temp2 = temp2->link;
        temp2->link = temp;
    }
}

void DeleteBeg(){
    struct node *temp;
    if(head == NULL)
        printf("Nothing to delete in the list\n");
    else{
        temp = head;
        head = head->link;
        free(temp);
    }
}

void DeleteEnd(){
    struct node *temp, *temp2;
    if(head == NULL)
        printf("Nothing to delete in the list\n");
    else{
        temp = head;
    while(temp->link->link != NULL)
        temp = temp->link;
        temp2 = temp->link;
        free(temp2);
        temp->link=NULL;
        }
}

void InsertLoc(int loc, int n){
    int i;
    struct node *temp, *temp2, *temp3;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = n;
    temp->link = NULL;
    temp2 = temp3 = head;
    for(i=1; i<loc-1; i++){
        temp2 = temp2->link;
    }
    temp3 = temp2->link;
    temp2->link = temp;
    temp->link = temp3;
    temp = temp2 = temp3 = NULL;
}

void DeleteLoc(int loc){
    int i;
    struct node *temp, *temp2, *temp3;
    temp2 = temp3 = temp = head;
    for(i=1; i<loc-1; i++){
        temp = temp->link;
    }
    temp2 = temp->link;
    temp3 = temp2->link;
    free(temp2);
    temp->link = temp3;
    temp = temp3 = NULL;
}

void PrintList(void){
    if(head == NULL)
        printf("The Singly Linked List is Empty\n");
    else{
        struct node *temp;
        temp = head;
        printf("The Singly Linked List data's are: ");
        while(temp != NULL){
            printf("%d ",temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}

void ReverseList(){
	struct node *prev=NULL,*next=NULL;
	while(head!=NULL){
		next=head->link;
		head->link=prev;
		prev=head;
		head=next;
	}
	head=prev;
}

int main()
{
    int i, n, loc;

    while(1){
        printf("\n<--------------------------------------------------------->\n");
        printf("SINGLY LINKED LIST!!!\n");
        printf("<--------------------------------------------------------->\n");
        printf("List Operations\n");
        printf("1.Insert at Beginning\n");
        printf("2.Insert at End\n");
        printf("3.Delete from Beginning\n");
        printf("4.Delete from End\n");
        printf("5.Insert at a specific location\n");
        printf("6.Delete from a specific location\n");
        printf("7.Printing and Traversing\n");
 	printf("8.Reverse the list\n");
 	printf("9.Exit\n");
        printf("Enter your choice : ");
        if(scanf("%d",&i)<=0){
            printf("Enter only an Integer\n");
            exit(0);
        } 
    else{
        switch (i){
            case 1:
            printf("Enter the data to insert at the beginning : ");
            scanf("%d",&n);
            InsertBeg(n);
            break;
            case 2:
            printf("Enter the data to insert at the beginning : ");
            scanf("%d",&n);
            InsertEnd(n);
            break;
            case 3:
            DeleteBeg();
            break;
            case 4:
            DeleteEnd();
            break;
            case 5:
            printf("Enter the location where you want to Insert node : ");
            scanf("%d",&loc);
            printf("Enter the data to insert at location %d : ",loc);
            scanf("%d",&n);
            InsertLoc(loc, n);
            break;
            case 6:
            printf("Enter the location from where you want to Delete node : ");
            scanf("%d",&loc);
            DeleteLoc(loc);
            break;
            case 7:
            PrintList();
            break;
	    case 8:
	    ReverseList();
	    break;
            case 9:
            exit(0);
            break;
            }

    }
}
return 0;
}
