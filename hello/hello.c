 #include <stdio.h>
#include <cs50.h>
#include <string.h>

int isItOneOrTwo(int num1);

int main(void)
{
    int num1 = 0;
    string message ;

    printf("Welcome to our program, here you can encrypt/decrypt your chosen message\n");
    printf("To encrypt enter 1\n");
    printf("To decrypt enter 2\n");
    num1 = isItOneOrTwo(num1);

    message = get_string("Enter your message\n");


   switch(num1)
     {
   case 1:
    for(int i = 0; (i < 100 && message[i] != '\0'); i++)
        message[i] = message[i] + 3;

      printf("\nEncrypted : %s\n", message);
      break;

    case 2:
      for(int i = 0; (i < 100 && message[i] != '\0'); i++)
        message[i] = message[i] - 3;

      printf("\nDecrypted : %s\n", message);
      break;

   default:
      printf("Error\n");
   }
}



int isItOneOrTwo(int num1){


        do
    {
        num1 = get_int("Waiting for input...");

    }while (num1 != 1 && num1 != 2);

    if(num1 == 1)
    {
        return 1;
    }

    else
    {
        return 2;
    }

}
 