/* Created By Dark_BaBa Don't Remove this line */
#include <stdio.h>
#include <stdlib.h>

void menu();
void funzione1(); 
void funzione2(); 
void funzione3(); 
void funzione4(); 
void funzione5(); 
int main()
{
    menu();
    return 0;
}

void menu()
{
     int select;
     char choice;
     do
     {
          system("CLS");
          printf("Main Menu\n");
          printf("1\n");
          printf("2\n");
          printf("3\n");
          printf("4\n");
          printf("5\n");
          scanf("%d", &select);
          
          switch(scelta)
          {
                        case 1:
                             system("CLS");
                             funzione1();
                             system("PAUSE");
                             system("CLS");
                             break;
                        case 2:
                             system("CLS");
                             funzione2();
                             system("PAUSE");
                             system("CLS");
                             break;
                        case 3:
                             system("CLS");
                             funzione3();
                             system("PAUSE");
                             system("CLS");
                             break;
                        case 4:
                             system("CLS");
                             funzione4();
                             system("PAUSE");
                             system("CLS");
                             break;
                        case 5:
                             system("CLS");
                             funzione5();
                             system("PAUSE");
                             system("CLS");
                             break;
                        default:
                             printf("Error\n");
                             break;
          }
          printf("Return to main menu? <S> <N>: ");
          scanf("%s", choice);
     }
     while (choice !='N');
}
void funzione1() 
{
     printf("1\n");
}
void funzione2()
{
     printf("2\n");
}
void funzione3() 
{
     printf("3\n");
}
void funzione4()
{
     printf("Menu created by Dark_BaBa please don't leave this\n");
}
void funzione5()
{
     printf("5\n");
}
