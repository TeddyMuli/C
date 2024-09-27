#include <stdio.h>
#include <stdlib.h>
struct Item{
   int item_no;
   char item_name[50];
   int qty;
    int price;
};
int main()
{
    FILE *fpointer = fopen("items.txt","w");
    struct Item it1;
    printf("Enter the Item no: ");
    scanf("%d",&it1.item_no);

    printf("Enter the Item Name: ");
    scanf("%s",&it1.item_name);

    printf("Enter the quantity: ");
    scanf("%d",&it1.qty);

    printf("Enter the price: ");
    scanf("%d",&it1.price);

    fprintf(fpointer,"%d\n%s\n%d\n%d\n",it1.item_no,it1.item_name,it1.qty,it1.price);
    fclose(fpointer);
    return 0;
}
