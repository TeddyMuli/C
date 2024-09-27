#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};
typedef struct node node_t;

void printlist(node_t *head) {
    node_t *temporary = head;

    while (temporary != NULL) {
        printf("%d - ", temporary ->value);
        temporary = temporary->next;
    }
    printf("\n");
}

node_t *create(int value) {
    node_t *result = malloc(sizeof(node_t));
    result->value = value;
    result->next = NULL;
    return result;
}
int main() {
    node_t *head;
    node_t *ted;

   /* ted = create(1);
    head = ted;
    ted = create(2);
    ted->next = head;
    head = ted;
    ted = create(3);
    ted->next = head;
    head = ted;
*/

for (int i = 0; i < 25; i++)
{
    
    ted = create(i);
    ted->next = head;
    head = ted;
}
    printlist(head);
    return 0;
}