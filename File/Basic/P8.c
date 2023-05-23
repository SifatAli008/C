// P-8:Storing student details
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *file;
    char name[20];
    int id, quantity, n;
    float price;

    file = fopen("product.text", "a");

    if (file == NULL)
    {
        printf("\nFile doesn't exist");
    }
    else
    {
        printf("\nFile is opened\n");
        printf("how many product tou want to upload: ");
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            printf("Product Number : %d", i);

            printf("\nEnter Product Id: ");
            scanf("%d", &id);

            fflush(stdin);

            printf("\nEnter Product Name: ");
            fgets(name, sizeof(name), stdin);
            name[strcspn(name, "\n")] = '\0';

            fflush(stdin);

            printf("Enter Product price : ");
            scanf("%f", &price);

            printf("Enter Product  quantity : ");
            scanf("%d", &quantity);

            fprintf(file, "\n%d\t%s\t\t%f\t\t%d\n", id, name, price, quantity);
        }

        fclose(file);
    }
}