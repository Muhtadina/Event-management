#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <time.h>
#include <string.h>
#define SIZE 100

void signup(void);
void login(void);

int main(void)
{
    system("color F0");

    int n;
    printf("---------------------------\n");
    printf("|  1. Sign up             |\n");
    printf("|  2. Login               |\n");
    printf("|  3. Exit                |\n");
    printf("---------------------------\n");

    printf("Choose your option: ");
    scanf("%d", &n);

    system("cls");

    if(n==1)
    {
        signup();
    }

    if(n==2)
    {
        login();
    }

    else
        return 0;

    return 0;
}

struct sign_in
{
    char fname[100],
         lname[100],
         username[100],
         password[100];
};

void signup(void)
{
    system("color F1");

    struct sign_in s;

    printf("*-----------*\n");
    printf("|  SIGN UP  |\n");
    printf("*-----------*\n");

    FILE*file;
    gets(s.fname);
    file = fopen("input.txt","w");

    printf("Enter your First Name: ");
    gets(s.fname);
    printf("Enter your Last Name: ");
    gets(s.lname);

    printf("\n");

    printf("Enter your username: ");
    gets(s.username);
    printf("Enter password: ");
    gets(s.password);

    /* fputs(s,file); */
    fwrite(&s, sizeof(s), 1, file);
    fclose(file);

    system("cls");

    printf("*----------------------------*\n");
    printf("|  Your Sign-Up is COMPLETE. |\n");
    printf("*----------------------------*\n");
    printf("For login:- Type anything to proceed > ");

    login();
}

void login(void)
{
    struct sign_in s;

    FILE*file;
    file = fopen("input.txt", "r");

    char username[100],
         password[100];

    gets(username);

    system("cls");
    printf("*-----------*\n");
    printf("|   LOGIN   |\n");
    printf("*-----------*\n");

    printf("Enter the username: ");
    gets(username);
    printf("Enter password: ");
    gets(password);

    system("cls");

    while(fread(&s, sizeof(s), 1, file))
    {
        if(strcmp(username, s.username)==0 && strcmp(password, s.password)==0)
        {
            system("color F5");
            printf("*--------------------------*\n");
            printf("|  SUCCESSFULLY logged in  |\n");
            printf("*--------------------------*\n");
            printf("  \n");
            printf("Now, You may proceed from here.\n");
        }
        else
        {
            system("color E4");
            printf("ERROR! Invalid username or password.");
            printf("\n");

            printf("PLEASE TRY AGAIN!\n");

            do
            {
                int n;

                printf("---------------------------\n");
                printf("|  1. Sign up             |\n");
                printf("|  2. Login               |\n");
                printf("|  3. Exit                |\n");
                printf("---------------------------\n");

                printf("Choose your option: ");
                scanf("%d", &n);

                system("cls");

                if(n==1)
                {
                    signup();
                }

                if(n==2)
                {
                    login();
                }

                else
                {
                    printf("Let's proceed...");
                    return 0;
                }
            }
            while('a');
        }
    }
    fclose(file);
}
