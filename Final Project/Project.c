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
};

int admin();
void cart();
void products();

void upload();
int storage();

void access(int num);
int adminOption(int opt);
int purchased();
int main()
{
    printf("\n");
    printf("= = = = => Navigation bar < = = = \n");
    printf("=\t\t\t\t=\n");
    printf("=  1. Shop.\t\t\t=\n");
    printf("=  2. Control Penal.\t\t=\n");
    printf("=  3. Close the Program.\t=\n");
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
        admin();
        break;

    default:
        break;
    }

    return 0;
}
void products()
{
    printf("\n\n\n");

    FILE *fs = fopen("product.txt", "r");
    char ch;
    if (fs == NULL)
    {
        printf("Error: Could not open %s\n", "product.txt");
        return;
    }
    printf("Id  Name  Price\n");

    while ((ch = getc(fs)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fs);

    FILE *fp1, *fp2;
    int num_products, i, product_id, matched = 0, n = 50;
    struct products info[n];
    float total = 0;

    fp1 = fopen("product.txt", "r");
    fp2 = fopen("cart.txt", "w");

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
    }

    printf("\nHow many products you want to buy: ");
    scanf("%d", &num_products);

    for (i = 0; i < num_products; i++)
    {
        matched = 0;
        printf("\nEnter product ID: ");
        scanf("%d", &product_id);

        for (int j = 0; j < n; j++)
        {
            if (info[j].id == product_id)
            {
                matched = 1;
                total = total + info[j].price;
                fprintf(fp2, "Id:%d  Product:%s  Price:%.2f\n", info[j].id, info[j].name, info[j].price);
                fprintf(fp2, "------------------------------------------------------------------\n");
                break;
            }
        }

        if (matched)
        {
            printf("Product Purchased to\n");
        }
        else
        {
            printf("Product not found\n");
        }
    }

    fprintf(fp2, "Total price: %.2f\n\n", total);

    printf("\n\nThanks For Shoping\n\n");

    fclose(fp1);
    fclose(fp2);

    printf("\n\t\t\tThanks For Shoping\n");

    FILE *fp = fopen("cart.txt", "r");

    if (fp == NULL)
    {
        printf("Error: Could not open\n");
        return;
    }
    // Read and display product contents

    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    FILE *file1, *file2;

    file1 = fopen("cart.txt", "r");
    file2 = fopen("purchased.txt", "a");

    if (file1 == NULL || file2 == NULL)
    {
        printf("File is Not Founded");
    }

    else
    {

        while ((ch = getc(file1)) != EOF)
        {
            fputc(ch, file2);
        }

        fclose(file1);
        fclose(file2);

    }
}

void cart()
{
    printf("\n\n\n");

    FILE *fp = fopen("cart.txt", "r");
    char ch;
    if (fp == NULL)
    {
        printf("Error: Could not open\n");
        return;
    }
    // Read and display product contents

    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);
}

int admin()
{
    printf("\n\n\n");

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
    printf("\n\n\n");
    int set = 5055; // PASS WORD
    attempt--;
    try++;

    printf("\n");
    if (num == set)
    {
        printf("\n");
        printf("= = = = => Navigation bar < = = = \n");
        printf("=\t\t\t\t=\n");
        printf("=  1. Upload.\t\t\t=\n");
        printf("=  2. Stroge.\t\t\t=\n");
        printf("=  3. Selles.\t\t\t=\n");
        printf("=\t\t\t\t=\n");
        printf("= = = = = = = = = = = = = = = = =\n");
        printf("\n");

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
        purchased();
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
    printf("\n\n\n");
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

            fprintf(file, "%d  %s  %.2f  %d\n", info[i].id, info[i].name, info[i].price);
        }
        fclose(file);
    }
}
int storage()
{
    printf("\n\n\n");
    FILE *fp = fopen("product.txt", "r");
    char ch;
    if (fp == NULL)
    {
        printf("Error: Could not open %s\n", "product.txt");
        return 1;
    }
    printf("Id  Name  Price\n");

    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}

int purchased()
{
    printf("\n\n\n");
    FILE *fp = fopen("purchased.txt", "r");
    char ch;
    if (fp == NULL)
    {
        printf("Error: Could not open %s\n", "product.txt");
        return 1;
    }
    printf("Id  Name  Price\n");

    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}