#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int attempt = 3;
int try = 0;

struct products
{
    int id;
    char name[100];
    float price;
    int quantity;
};

int admin();
void cart();
void products();


void upload();

int storage();
int history();

void access(int num);
int adminOption(int opt);

int main()
{
    printf("\n");
    printf("= = = = => Navigation bar < = = = \n");
    printf("=\t\t\t\t=\n");

    printf("=  1. Products.\t\t\t=\n");
    printf("=  2. Purchase History.\t\t=\n");
    printf("=  3. Control Penal.\t\t=\n");
    printf("=  5. Close the Program.\t=\n");

    printf("=\t\t\t\t=\n");
    printf("= = = = = = = = = = = = = = = = =\n");
    printf("\n");
    int option;

    printf("Enter a value of a option:");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        products();
        break;
    case 2:
        cart();
        break;

    case 3:
        admin();
        break;

    default:
        break;
    }
    
}
void products()
{
    FILE *fp1, *fp2;
    int num_products, i, product_id, matched = 0, n = 50;
    struct products info[n];

    fp1 = fopen("product.txt", "r");
    fp2 = fopen("product.txt", "a");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening file \n");
        return;
    }

    for (i = 0; i < n; i++)
    {
        fscanf(fp1, " %d ", &info[i].id);
        fscanf(fp1, " %s ", &info[i].name);
        fscanf(fp1, " %f ", &info[i].price);
        fscanf(fp1, " %d ", &info[i].quantity);
    }

    printf("Enter the number of products you want to buy: ");
    scanf("%d", &num_products);

    for (i = 0; i < num_products; i++)
    {
        matched = 0;
        printf("Enter product ID: ");
        scanf("%d", &product_id);

        for (int j = 0; j < n; j++)
        {
            if (info[j].id == product_id)
            {
                matched = 1;
                fprintf(fp2, "%d, %s, %.2f, %d\n", info[j].id, info[j].name, info[j].price, info[j].quantity);
                break;
            }
        }

        if (matched)
        {
            printf("Product saved to\n");
        }
        else
        {
            printf("Product not found\n");
        }
    }

    fclose(fp1);
    fclose(fp2);
}

void cart()
{
    FILE *fp = fopen("product.txt", "r");
    char ch;
    if (fp == NULL)
    {
        printf("Error: Could not open %s\n", "product.txt");
        return;
    }
    // Read and display product contents
    int product_id;

    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);
}

int admin()
{
    char name[50];
    int num;

    printf("\n");

    printf("Enter your name and 4 digit Password. \n\n");
    fflush(stdin);
    printf("    Name : "); // For Takeing Name of user
    fgets(name, sizeof(name), stdin);
    fflush(stdin);
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
        printf("  2. \tStorage.\n");
        printf("  3. \tHistory.\n");
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
        storage();
        break;

    case 3:
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

    file = fopen("product.txt", "a");
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

          

            printf("Enter Product price : ");
            scanf("%f", &info[i].price);

            

            printf("Enter Product  quantity : ");
            scanf("%d", &info[i].quantity);

            fprintf(file, "%d %s %f %d\n", info[i].id, info[i].name, info[i].price, info[i].quantity);
        }
        fclose(file);
    }
}



int storage()
{
    FILE *fp = fopen("product.txt", "r");
    char ch;
    if (fp == NULL)
    {
        printf("Error: Could not open %s\n", "product.txt");
        return 1;
    }
    // Read and display product contents
    int product_id;

    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}

int history()
{
    printf("hello 4");
}
