#include <stdio.h>
#include <stdlib.h>
/*Linked List*/
struct node {
    int value;
    struct node *next;
};
typedef struct node node_t;
void insert(node_t **head,int data)
{
    node_t *temp = (node_t*)malloc(sizeof(node_t));
    /*Malloc here is used to reserve memory space for a new member of the struct*/
    temp->value = data;
    temp->next = (*head);
    (*head) = temp;
}

void printlist(node_t *head) {
    node_t *temporary = head;

    while (temporary != NULL) {
        printf("%d = ", temporary ->value);
        temporary = temporary->next;
    }
    printf("\n");
}
void insertnode(node_t** head,int index,int data)
{
    if (*head == NULL && index != 0)
    {
        printf("The list is empty!\n");
        return;
    }
    node_t* new = (node_t*)malloc(sizeof(node_t));
    new->value = data;
    new->next = NULL;
    if (index == 0)
    {
        new->next = *head;
        *head = new;
        return;
    }
    node_t *prev = *head;
    for (int i = 0;i < index -1; i++)
    {
        prev = prev->next;
    }
    if (prev == NULL)
    {
        printf("Invalid index\n");
    }
    new->next = prev->next;
    prev->next = new;
}
void delete(node_t** head,int key)
{
    if (*head == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    if ((*head)->value == key)
    {
        node_t *temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }
    node_t *prev = *head;
    while (prev->next != NULL && prev->next->value != key)
    {
        prev = prev->next;
    }
    if (prev->next == NULL)
    {
        printf("Key not found!\n");
        return;
    }
    node_t *temp = prev->next;
    prev->next = temp->next;
    free(temp);
}
int main() {
    node_t n1, n2, n3;
    node_t *head;

    n1.value = 45;
    n2.value = 8;
    n3.value = 32;

    //link them up
    head = &n3;
    n3.next = &n2;
    n2.next = &n1;
    n1.next = NULL;  //END

    printlist(head);
    //insert(&head,76);
    insert(&head,443);
    insertnode(&head,1,89);
    printlist(head);
    delete(&head,84);
    printlist(head);
}