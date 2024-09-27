#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
typedef struct node mine;
/*Create new node*/
void create(mine **head,int data)
{
    mine *temp = (mine*)malloc(sizeof(mine));
    temp->data = data;
    temp->next = *head;
    *head = temp;
}
/*Insert a node*/
void insert(mine **head,int index,int data)
{
    if (*head == NULL && index != 0)
    {
        printf("The list is empty!\n");
        return;
    }
    mine *temp = (mine*)malloc(sizeof(mine));
    temp->data = data;
    temp->next = NULL;
    if (index == 0)
    {
        temp->next = *head;
        *head = temp;
        return;
    }
    mine *prev = *head;
    for (int i = 0; i < index -1; i++)
    {
        prev = prev->next;
    }
    if (prev == NULL)
    {
        printf("Invalid index!\n");
        return;
    }
    temp->next = prev->next;
    prev->next = temp;
}
/*Delete an element*/
void delete(mine **head,int key)
{
    if (*head == NULL)
    {
        printf("The list is empty!\n");
        return;
    }
    if ((*head)->data == key)
    {
        mine *temp = *head;
        (*head) = (*head)->next;
        free(temp);
        return;
    }
    mine *prev = *head;
    while (prev->next != NULL && prev->next->data != key)
    {
        prev = prev->next;
    }
    if (prev->next == NULL)
    {
        printf("Invalid key!\n");
        return;
    }
    mine *temp = prev->next;
    prev->next = temp->next;
    free(temp);

}
/*Print the list*/
void print_list(mine *head)
{
    mine *temp = head;

    while (temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    mine *head;
    create(&head,34);
    create(&head,324);
    create(&head,343);
    create(&head,341);
    insert(&head,0,69);
    delete(&head,34);
    print_list(head);
    return 0;
}