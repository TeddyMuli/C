#include <stdio.h>
#include <stdlib.h>
/*Struct*/
struct node {
    int data;
    struct node *next;
};
typedef struct node my_node;
/*Create new node*/
int *create(my_node **head,int data)
{
    my_node *temp = (my_node*)malloc(sizeof(my_node));
    temp->data = data;
    temp->next = (*head);
    (*head) = temp;
}
/*Insert specific*/
void insert_node(my_node **head,int index,int data)
{
    if (*head == NULL && index != 0)
    {
        printf("The list is empty!\n");
        return;
    }
    my_node *new_node = (my_node*)malloc(sizeof(my_node));
    new_node->data = data;
    new_node->next = NULL;

    if (index == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return;
    }
    my_node *prev = *head;
    for (int i = 0;i < index - 1;i++)
    {
        prev = prev->next;
    }
    if (prev == NULL)
    {
        printf("Invalid index!\n");
    }
    new_node->next = prev->next;
    prev->next = new_node;
}
void delete(my_node **head,int key)
{
    if ((*head)->data == key)
    {
        my_node *temp = *head;
        (*head) = (*head)->next;
        free(temp);
        return;
    }
    my_node *prev = *head;
    while (prev->next != NULL && prev->next->data != key)
    {
        prev = prev->next;
    }
    my_node *temp = prev->next;
    temp->next = prev->next;
    free(temp);
}
/*Print List*/
void print_list(my_node *head)
{
    my_node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
/*Main*/
int main()
{
    my_node *head;
    create(&head,32);
    create(&head,52);
    create(&head,62);
    create(&head,42);

    insert_node(&head,0,45);
    delete(&head,45);
    print_list(head);
}