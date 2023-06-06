#include <stdio.h>
#include <string.h>
#include <string.h>
void products();
struct products
{
  char id[3];
  char name[20];
  float price;
  int quantity;
};

int main()
{
  printf("\n");
  printf("= = = = => Navigation bar < = = = \n");
  printf("=\t\t\t\t=\n");

  printf("=  1. Search for the Product.\t=\n");
  printf("=  2. Products.\t\t\t=\n");
  printf("=  3. Purchase History.\t\t=\n");
  printf("=  4. Control Penal.\t\t=\n");
  printf("=  5. Close the Program.\t=\n");

  printf("=\t\t\t\t=\n");
  printf("= = = = = = = = = = = = = = = = =\n");
  printf("\n");
  int option;

  printf("Enter a value of a option:");
  scanf("%d", &option);

  switch (option)
  {
  case 2:
    products();
    break;
  case 3:
    printf("hello");
    break;

  default:
    break;
  }
}

void products()
{

  char ch;
  char id[50];
  int found = 0, n, i;

  struct products info[n];

  FILE *file;
  FILE *cart;

  file = fopen("product.xlsx", "r");
  cart = fopen("cart.xlsx", "w");

  if (file == NULL)
  {
    printf("\nFile doesn't exist");
  }
  printf("\nFile is opened successfully\n");

  while (!feof(file)) // feof - file End of
  {
    ch = fgetc(file);
    printf("%c", ch);
  }

  printf("how many thing you want to buy: ");
  scanf("%d", &n);

  printf("Enter the product id: ");
  for (i = 1; i <= n; i++)
  {
    fflush(stdin);
    gets(id);

    if (strcmp(info[i].id, id) == 0)
    {
      while ((ch = getc(file)) != EOF)
      {
        fputc(ch, cart);

        printf("%s\t\t", info[i].name);
      }

      found = 1;
      break;
    }
  }

  if (!found)
  {
    printf("The product is not in the directory.\n");
  }

  fclose(file);
  fclose(cart);
}
