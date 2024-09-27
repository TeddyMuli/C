#include <stdio.h>
#include <stdlib.h>

struct Patient{
    char name_1[50];
    char name_2[50];
    int yob, age, height;
    union weight{
        int iweight;
        float fweight;
    } u;
    double bp;
    char symptoms[50];
    char meds[100];


};
int main()
{
    FILE *fpointer=fopen("patients.txt","w");
    fprintf(fpointer,"Patients of Ushindi Hospital\n");
    int n;
    printf("Welcome to Ushindi hospital\n");
    printf("Enter number of booked consultations: ");
    scanf("%d",&n);
   for(int i=1;i<=n;i++){
    printf("     Patient %d",i);
    struct Patient pat1;
    printf("\n");
    printf("Enter the first name: ");
    scanf("%s",&pat1.name_1);

    printf("Enter the last name: ");
    scanf("%s",&pat1.name_2);

    printf("Enter the Year of Birth: ");
    scanf("%d",&pat1.yob);
    pat1.age=2022-pat1.yob;
    if(pat1.age < 14)
    {
        printf("%s %s is underage try a paedriatric hospital,thank you",pat1.name_1,pat1.name_2);
        break;
    }

    printf("Enter the height: ");
    scanf("%d",&pat1.height);

    printf("Enter the weight: ");
    scanf("%f",&pat1.u.fweight);

    printf("Enter the symptoms of %s: ",pat1.name_1);
    scanf("%s",&pat1.symptoms);

    printf("Enter the prescription: ");
    scanf("%s",&pat1.meds);
printf("\n");
  //  printf(" %s %s \n Age: %d \n Height: %lf \n Weight: %lf\n Symptoms: %s\n Prescription: %s\n",pat1.name_1,pat1.name_2,pat1.age,pat1.height,pat1.weight,pat1.symptoms,pat1.meds);
    fprintf(fpointer,"Name: %s %s \n Age: %d \n Height: %d \n Weight: %f\n Symptoms: %s\n Prescription: %s\n",pat1.name_1,pat1.name_2,pat1.age,pat1.height,pat1.u.fweight,pat1.symptoms,pat1.meds);

}
fclose(fpointer);
    return 0;
}

