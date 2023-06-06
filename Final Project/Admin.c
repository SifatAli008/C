// Admin
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int attempt = 3;
int try = 0;
struct products
{
    int id;
    char name[20];
    float price;
    int quantity;
};

void access(int num);

void upload();
int update();
int storage();
int history();
int adminOption(int opt);

int main()
{
    char name[50];
    int num;

    printf("\n");

    printf("Enter your name and 4 digit Password. \n\n");

    printf("    Name : "); // For Takeing Name of user
    fgets(name, sizeof(name), stdin);

    printf("Password : ");
    scanf("%d", &num); // For Takeing 4 digit number Password

    access(num);

    return 0;
}

void access(int num)
{
    int set = 6968; // PASS WORD
    attempt--;
    try++;

    printf("\n");
    if (num == set)
    {
        printf("\n============================\n");
        printf("\n");
        printf("Number \tOptions\n");
        printf("\n");
        printf("  1. \tUplaod.\n");
        printf("  2. \tUpdate.\n");
        printf("  3. \tStorage.\n");
        printf("  4. \tHistory.\n");
        printf("\n");
        printf("============================\n");

        int n;
        printf("Enter the value:");
        scanf("%d", &n);
        adminOption(n);
    }
    else if (num != set)
    {
        printf("\nPassword incorrect try again");
        printf("\n %d attemp left.", attempt + 1);

        printf("\nPassword : "); // PASS WORD
        scanf("%d", &num);

        if (try < 3)
        {
            access(num);
        }
        else
        {
            printf("\nFailed to Login");
        }
    }
}

int adminOption(int opt)
{

    switch (opt)
    {
    case 1:
        upload();
        break;

    case 2:
        update();
        break;

    case 3:
        storage();
        break;

    case 4:
        history();
        break;

    default:
        printf("The number of Invalid.\n");
        printf("Enter the right value: ");
        int m;
        scanf("%d", &m);
        adminOption(m);
        break;
    }
}

void upload()
{
    FILE *file;

    int n;
    struct products info[n];

    file = fopen("product.xlsx", "a");
    if (file == NULL) 
    {
        printf("\nFile doesn't exist");
    }
    else
    {
        printf("\nFile is opened\n");
        printf("\nHow many product tou want to upload: ");
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            printf("\n\nProduct Number : %d", i);

            printf("\nEnter Product Id: ");
            scanf("%d", &info[i].id);

            fflush(stdin);

            printf("Enter Product Name: ");
            gets(info[i].name);

            fflush(stdin);

            printf("Enter Product price : ");
            scanf("%.3f",&info[i].price);

            fflush(stdin);

            printf("Enter Product  quantity : ");
            scanf("%d",&info[i].quantity);

            fprintf(file, "\n%d\t\t%s\t\t%f\t\t%d\n", info[i].id, info[i].name, info[i].price, info[i].quantity);
        }
        fclose(file);
    }
}

int update()
{
    printf("hello 2");
}

int storage()
{
    printf("hello 3");
}

int history()
{
    printf("hello 4");
}
