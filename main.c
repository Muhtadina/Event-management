/**
 ** Name: Muhtadina Serniabat Tasin
 ** ID: 223 2160 642
 ** Course: CSE115L
 ** Section: 10
 **
 ** Project: EVENT MANAGEMENT SYSTEM
 ** Course: CSE115L.10
 ** Semester: Fall 2022
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <dos.h>
#include <time.h>
#define EXIT 'n'
#define SIZE 100
#define P_SIZE 10

void splash_screen();
void signup();
void login();
void menu(char YES);
int budget(int price[], int i, int n);
void thanks();

struct sign_in
{
    char fname[100],
         lname[100],
         username[100],
         password[100];
};

struct data
{
    char f_name[SIZE],
         l_name[SIZE],
         locate[SIZE];

    int date[SIZE],
        time[SIZE];
};

int main(void)
{
    splash_screen();

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

void splash_screen(void)
{
    system("color D7");

    printf("\n");
    printf("   .. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .\n");
    printf("   .                                                                                        .\n");
    printf("   .                                                                                        .\n");
    printf("   .                                          -##=                                          .\n");
    printf("   .                                         :-==-:                                         .\n");
    printf("   .                                     ..---::::---..                                     .\n");
    printf("   .                                    . ............ :                                    .\n");
    printf("   .                                ....-:........:.:.:-....                                .\n");
    printf("   .                         ......:.....--::------::--:....:......                         .\n");
    printf("   .                      .=- .=-. -=- :=-. -=:  :=- .-=: -=- .=-. -=.                      .\n");
    printf("   .               :=:==-=--=-:+:==--=-===----:::::---===-==-==:+:-=--+-==:=:               .\n");
    printf("   .               -:--+:+=:=.:=.=:-.:::...          ...:::.-:=.=: =:=+-=--:-               .\n");
    printf("   .         .      .:+=:=--:::=::..::.                  .::..::-:.-:---=+:.      .         .\n");
    printf("   .       .--::....::--..: .  ..:..:                      :.....  . . :--::.:.:..-:.       .\n");
    printf("   .       ---:.:.:.::-:...  .......                        .......  . ::-::::.:.:---       .\n");
    printf("   .         .         -.:  :.:.                                 :.:  ::-.        .         .\n");
    printf("   .                   :.: .:.                                    .:. .::                   .\n");
    printf("   .                   :.:.: :                                    : -..::                   .\n");
    printf("   .                   :...- :                                    : -..::                   .\n");
    printf("   .                   :.-:=-                                      ---:::                   .\n");
    printf("   .                   :..:+:                                      :=- ::                   .\n");
    printf("   .                   :.-:+:                                      :+-:::                   .\n");
    printf("   .                   :...=-                                      :=: ::                   .\n");
    printf("   .                   :.--=:                                      :=-:::                   .\n");
    printf("   .                   :.:.+-                                      :=:.::                   .\n");
    printf("   .                   :.:-+:                                      :=-:::                   .\n");
    printf("   .                   :.::+=:::-::-:::-:::::.-::-:::-::-:::-::-:::==-:::                   .\n");
    printf("   .                   ::=:=:=-=-==---=:+---=--==--=-=-+:=---==-=-=:----:                   .\n");
    printf("   .                                                                                        .\n");
    printf("   .                                                                                        .\n");
    printf("   . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . ..\n");

    sleep(3);
    system("cls");

    printf("\n");
    printf("    ###      ### ####### ##       ####### ####### ########## ########   ######## #######\n");
    printf("    ##   ##   ## ##      ##       ##   ## ##   ## ##  ##  ## ##            ##    ##   ##\n");
    printf("    ##   ##   ## #####   ##       ##      ##   ## ##  ##  ## ######        ##    ##   ##\n");
    printf("    ##   ##   ## ##      ##    ## ##      ##   ## ##  ##  ## ##            ##    ##   ##\n");
    printf("    ############ ####### ######## ####### ####### ##  ##  ## ########      ##    #######\n");

    printf("                                                             ###\n");
    printf("                   ##########  ###     ####### ## ###     ##  ## #######\n");
    printf("                       ##     ## ##    ##      ## ## ##   ## #   ##\n");
    printf("                       ##    ##   ##   ####### ## ##  ##  ##     #######\n");
    printf("                       ##   #########       ## ## ##   ## ##          ##\n");
    printf("                       ##  ##       ## ####### ## ##    ####     #######\n");
    printf("\n");

    printf("                      ####### ###      ### ####### ###     ## ########\n");
    printf("                      ##       ##      ##  ##      ## ##   ##    ##\n");
    printf("                      #####     ##    ##   #####   ##  ##  ##    ##\n");
    printf("                      ##         ##  ##    ##      ##   ## ##    ##\n");
    printf("                      #######     ####     ####### ##    ####    ##\n\n");

    printf("  ###     ###  #####  ###     ##  #####   #####  ####### ###     ### ####### ###     ## ########\n");
    printf("  ## ## ## ## ##   ## ## ##   ## ##   ## ##   ## ##      ## ## ## ## ##      ## ##   ##    ##\n");
    printf("  ##  ###  ## ####### ##  ##  ## ####### ##      #####   ##  ###  ## #####   ##  ##  ##    ##\n");
    printf("  ##   #   ## ##   ## ##   ## ## ##   ## ## #### ##      ##   #   ## ##      ##   ## ##    ##\n");
    printf("  ##       ## ##   ## ##    #### ##   ##  ###### ####### ##       ## ####### #     ####    ##\n\n");

    printf("                   ###### ##    ## ###### ######## ####### ###     ###\n");
    printf("                  ##       ##  ## ##         ##    ##      ## ## ## ##\n");
    printf("                   ######    ##    ######    ##    #####   ##  ###  ##\n");
    printf("                        ##   ##         ##   ##    ##      ##   #   ##\n");
    printf("                   ######    ##    ######    ##    ####### ##       ##\n\n");

    sleep(5);
    system("cls");
}

void signup()
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

    fwrite(&s, sizeof(s), 1, file);
    fclose(file);

    system("cls");

    printf("*----------------------------*\n");
    printf("|  Your Sign-Up is COMPLETE. |\n");
    printf("*----------------------------*\n");
    printf("For login:- Type anything to proceed > ");

    login();
}

void login()
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

            char flow;
            printf("Type any key to proceed [or 'n' to terminate] ...\n");
            fflush(stdin);
            scanf("%c", &flow);

            system("cls");

            if(flow!=EXIT)
            {
                system("color F0");

                printf("*--------------*\n");
                printf("|   PROCEED?   |\n");
                printf("*--------------*\n");

                char yes = 'y';
                printf("Would you like to book an event?\n");
                printf("[Type 'y'[YES] to proceed or 'n'[NO] to exit the page.]\n");
                printf("> ");
                fflush(stdin);
                scanf("%c", &yes);

                system("cls");

                menu(yes);
                break;
            }


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

                else if(n==2)
                {
                    login();
                }

                else
                {
                    return 0;
                }
            }
            while('a');
        }
    }
    fclose(file);
}

void menu(char YES)
{
    while('b')
    {
        if(YES!=EXIT)
        {
            system("color F5");
            printf("*---------------*\n");
            printf("|  LET'S START  |\n");
            printf("*---------------*\n");
            printf("Please enter the necessary infos:\n");

            struct data d;
            int cost[7];

            FILE*file_1;
            gets(d.f_name);
            file_1 = fopen("input_1.txt","w");

            printf("Your First Name: ");
            gets(d.f_name);

            printf("Your Last Name: ");
            fflush(stdin);
            gets(d.l_name);

            printf("\n");

            printf("Where do you want to arrange/book your event?\n");
            printf("Location/Resort > ");
            fflush(stdin);
            gets(d.locate);

            printf("\n");

            printf("Date for your event (DD/MM/YYYY) > ");
            gets(d.date);

            printf("\n");

            printf("Time of your event (HH:MM)(am/pm) > ");
            gets(d.time);

            printf("\n");

            fwrite(&d, sizeof(d), 1, file_1);
            fclose(file_1);

            long long contact;
            char str[20];

            do
            {
                printf("Contact no. : +88 0 ");
                scanf("%lld", &contact);

                sprintf(str, "%lld", contact);

                if (strlen(str) == P_SIZE)
                    break;

                else
                {
                    system("cls");
                    system("color E4");
                    printf("ERROR! Invalid Contact Number.\n");
                    printf("Please try again.\n\n");
                }
            }
            while(1);

            printf("\n");

            system("cls");
            system("color F5");

            char event_t[SIZE] = " ",
                 event_n[SIZE] = " ",
                 extra[SIZE] = " ";

            char *eve_t,
                 *eve_n,
                 *ext;

            eve_t = event_t;
            eve_n = event_n;
            ext = extra;

            do
            {
                printf("%s, please choose an event from below:-\n\n", d.f_name);
                printf("---------------------------\n");
                printf("|  1. Private Event       |\n");
                printf("|  2. Corporate Event     |\n");
                printf("|  3. Charity Event       |\n");
                printf("---------------------------\n");

                int op;
                printf("=> ");
                scanf("%d", &op);

                system("cls");

                while(op>3)
                {
                    system("color E4");
                    printf("Oops!Sorry, but we can only arrange from the including events. \nPlease, choose from the including options...\n\n", op);

                    printf("Here are the options:-\n");
                    printf("---------------------------\n");
                    printf("|  1. Private Event       |\n");
                    printf("|  2. Corporate Event     |\n");
                    printf("|  3. Charity Event       |\n");
                    printf("---------------------------\n");

                    printf("=> ");
                    scanf("%d", &op);

                    system("cls");
                }

                int eop = 0;

                switch(op)
                {
                    case 1:
                        {
                            system("color C7");

                            eve_t = "PRIVATE EVENT";

                            printf("Which kind of Private Event would you like arrange through us?\n\n");

                            printf("Here are the private events: \n");
                            printf("-------------------------------\n");
                            printf("| 1. Wedding event            |\n");
                            printf("| 2. Birthday event           |\n");
                            printf("| 3. Festival gathering event |\n");
                            printf("| 4. Family Reunion           |\n");
                            printf("| 5. Theme Party              |\n");
                            printf("| 6. Anniversary Party        |\n");
                            printf("| 7. Children's Party         |\n");
                            printf("| 8. Baby Showering           |\n");
                            printf("-------------------------------\n");
                            printf("\n");

                            printf("Select the event you're preparing for - ");
                            scanf("%d", &eop);

                            system("cls");

                            switch(eop)
                            {
                            case 1:
                                {
                                    printf("*-----------------------------*\n");
                                    printf("|   DECOR PLANS FOR WEDDING   |\n");
                                    printf("*-----------------------------*\n");

                                    eve_n = "Wedding Ceremony";
                                }
                                break;

                            case 2:
                                {
                                    printf("*-----------------------------*\n");
                                    printf("|   DECOR PLANS FOR BIRTHDAY  |\n");
                                    printf("*-----------------------------*\n");

                                    eve_n = "Birthday Party";
                                }
                                break;

                            case 3:
                                {
                                    printf("*----------------------------------------*\n");
                                    printf("|   DECOR PLANS FOR FESTIVAL GATHERING   |\n");
                                    printf("*----------------------------------------*\n");

                                    eve_n = "Festival Gathering Event";

                                    printf("Include Festival => ");
                                    fflush(stdin);
                                    gets(ext);
                                }
                                break;

                            case 4:
                                {
                                    printf("*------------------------------------*\n");
                                    printf("|   DECOR PLANS FOR FAMILY REUNION   |\n");
                                    printf("*------------------------------------*\n");

                                    eve_n = "Family Reunion";
                                }
                                break;

                            case 5:
                                {
                                    printf("*---------------------------------*\n");
                                    printf("|   DECOR PLANS FOR THEME PARTY   |\n");
                                    printf("*---------------------------------*\n");

                                    eve_n = "Theme Party";

                                    printf("Include Theme => ");
                                    fflush(stdin);
                                    gets(ext);
                                }
                                break;

                            case 6:
                                {
                                    printf("*---------------------------------------*\n");
                                    printf("|   DECOR PLANS FOR ANNIVERSARY PARTY   |\n");
                                    printf("*---------------------------------------*\n");

                                    eve_n = "Anniversary Party";

                                }
                                break;

                            case 7:
                                {
                                    printf("*---------------------------------*\n");
                                    printf("|   DECOR PLANS FOR KID'S PARTY   |\n");
                                    printf("*---------------------------------*\n");

                                    eve_n = "Children's Party";
                                }
                                break;

                            case 8:
                                {
                                    printf("*------------------------------------*\n");
                                    printf("|   DECOR PLANS FOR BABY SHOWERING   |\n");
                                    printf("*------------------------------------*\n");

                                    eve_n = "Baby Showering";
                                }
                                break;

                                default:
                                break;
                            }

                        }
                        break;

                    case 2:
                        {
                            system("color B1");

                            eve_t = "CORPORATE EVENT";
                            printf("Which kind of Corporate Event would you like arrange through us?\n\n");

                            printf("Here are the corporate events: \n");
                            printf("-------------------------------\n");
                            printf("| 1. Conference               |\n");
                            printf("| 2. Product Launch Event     |\n");
                            printf("| 3. Team Building Event      |\n");
                            printf("| 4. Sponsorship              |\n");
                            printf("| 5. Trade Show               |\n");
                            printf("| 6. Business Dinner          |\n");
                            printf("| 7. Seminar                  |\n");
                            printf("| 8. Retirement Party         |\n");
                            printf("| 9. Sport Events             |\n");
                            printf("-------------------------------\n");
                            printf("\n");

                            printf("Select the event you're preparing for - ");
                            scanf("%d", &eop);

                            system("cls");

                            switch(eop)
                            {
                            case 1:
                                {
                                    printf("*--------------------------------*\n");
                                    printf("|   DECOR PLANS FOR CONFERENCE   |\n");
                                    printf("*--------------------------------*\n");

                                    eve_n = "Conference";
                                }
                                break;

                            case 2:
                                {
                                    printf("*------------------------------------------*\n");
                                    printf("|   DECOR PLANS FOR PRODUCT LAUNCH EVENT   |\n");
                                    printf("*------------------------------------------*\n");

                                    eve_n = "Product Launch";
                                }
                                break;

                            case 3:
                                {
                                    printf("*--------------------------------------*\n");
                                    printf("|  DECOR PLANS FOR TEAM BUILDING EVENT |\n");
                                    printf("*--------------------------------------*\n");

                                    eve_n = "Team Building Event";
                                }
                                break;

                            case 4:
                                {
                                    printf("*----------------------------------------*\n");
                                    printf("|    DECOR PLANS FOR SPONSORSHIP PARTY   |\n");
                                    printf("*----------------------------------------*\n");

                                    eve_n = "Sponsorship";
                                }
                                break;

                            case 5:
                                {
                                    printf("*------------------------------------*\n");
                                    printf("|     DECOR PLANS FOR TRADE SHOW     |\n");
                                    printf("*------------------------------------*\n");

                                    eve_n = "Trade Show";
                                }
                                break;

                            case 6:
                                {
                                    printf("*-------------------------------------*\n");
                                    printf("|   DECOR PLANS FOR BUSINESS DINNER   |\n");
                                    printf("*-------------------------------------*\n");

                                    eve_n = "Business Dinner";
                                }
                                break;

                            case 7:
                                {
                                    printf("*-----------------------------*\n");
                                    printf("|   DECOR PLANS FOR SEMINAR   |\n");
                                    printf("*-----------------------------*\n");

                                    eve_n = "Seminar";
                                }
                                break;

                            case 8:
                                {
                                    printf("*--------------------------------------*\n");
                                    printf("|   DECOR PLANS FOR RETIREMENT PARTY   |\n");
                                    printf("*--------------------------------------*\n");

                                    eve_n = "Retirement Party";
                                }
                                break;

                            case 9:
                                {
                                    printf("*----------------------------------*\n");
                                    printf("|   DECOR PLANS FOR SPORTS EVENT   |\n");
                                    printf("*----------------------------------*\n");

                                    eve_n = "Sports Event";

                                    printf("Include Sport => ");
                                    fflush(stdin);
                                    gets(ext);
                                }
                                break;

                                default:
                                break;
                            }
                        }
                        break;

                    case 3:
                        {
                        system("color A0");

                            eve_t = "CHARITY EVENT";
                            printf("Which kind of Charity Event would you like arrange through us?\n\n");

                            printf("Here are the private events: \n");
                            printf("-------------------------------\n");
                            printf("| 1. Golf Tournament          |\n");
                            printf("| 2. Charity Gala             |\n");
                            printf("| 3. Carnival                 |\n");
                            printf("| 4. Talent Show              |\n");
                            printf("| 5. Trivia Tournament        |\n");
                            printf("| 6. Field Day                |\n");
                            printf("| 7. Charity Sport Show       |\n");
                            printf("| 8. Fashion Show             |\n");
                            printf("| 9. Exhibition               |\n");
                            printf("-------------------------------\n");
                            printf("\n");

                            printf("Select the event you're preparing for - ");
                            scanf("%d", &eop);

                            system("cls");

                            switch(eop)
                            {
                            case 1:
                                {
                                    printf("*-------------------------------------*\n");
                                    printf("|   DECOR PLANS FOR GOLF TOURNAMENT   |\n");
                                    printf("*-------------------------------------*\n");

                                    eve_n = "Golf Tournament";
                                }
                                break;

                            case 2:
                                {
                                    printf("*----------------------------------*\n");
                                    printf("|   DECOR PLANS FOR CHARITY GALA   |\n");
                                    printf("*----------------------------------*\n");

                                    eve_n = "Charity Gala";
                                }

                            case 3:
                                {
                                    printf("*---------------------------*\n");
                                    printf("|  DECOR PLANS FOR CARNIVAL |\n");
                                    printf("*--- -----------------------*\n");

                                    eve_n = "Carnival";

                                    printf("What kind of Carnival you're planning for?");
                                    printf("=> ");
                                    fflush(stdin);
                                    gets(ext);
                                }
                                break;

                            case 4:
                                {
                                    printf("*----------------------------------*\n");
                                    printf("|    DECOR PLANS FOR TALENT SHOW   |\n");
                                    printf("*----------------------------------*\n");

                                    eve_n = "Talent Show";

                                    printf("Subject of the Talent Show => ");
                                    fflush(stdin);
                                    gets(ext);
                                }
                                break;

                            case 5:
                                {
                                    printf("*-------------------------------------*\n");
                                    printf("|  DECOR PLANS FOR TRIVIA TOURNAMENT  |\n");
                                    printf("*-------------------------------------*\n");

                                    eve_n = "Trivia Tournament";
                                }
                                break;

                            case 6:
                                {
                                    printf("*-------------------------------*\n");
                                    printf("|   DECOR PLANS FOR FIELD DAY   |\n");
                                    printf("*-------------------------------*\n");

                                    eve_n = "Field Day";
                                }
                                break;

                            case 7:
                                {
                                    printf("*-----------------------------------------*\n");
                                    printf("|   DECOR PLANS FOR CHARITY SPORTS SHOW   |\n");
                                    printf("*-----------------------------------------*\n");

                                    eve_n = "Charity Sports Show";

                                    printf("Include Sports => ");
                                    fflush(stdin);
                                    gets(ext);
                                }
                                break;

                            case 8:
                                {
                                    printf("*----------------------------------*\n");
                                    printf("|   DECOR PLANS FOR FASHION SHOW   |\n");
                                    printf("*----------------------------------*\n");

                                    eve_n = "Fashion Show";
                                }
                                break;

                            case 9:
                                {
                                    printf("*--------------------------------*\n");
                                    printf("|   DECOR PLANS FOR EXHIBITION   |\n");
                                    printf("*--------------------------------*\n");

                                    eve_n = "Exhibition";
                                }
                                break;

                                default:
                                break;
                            }
                        }
                        break;
                }

                int guest;
                printf("Estimate Guest Counts for Your Event = ");
                scanf("%d", &guest);

                printf("\n");
                printf("$ Subjective Decor : 80,000 TK\n\n");

                int add = 0;
                printf("Besides the subjective decors, there are some objective decors that you might want to have in your event.\n");
                printf("Press '1' to add them in your event, or '0' to avoid them.\n");
                printf("$ Cake : 1,000 TK                          -> ");
                scanf("%d", &add);

                if(add==1)
                    cost[0] = 1000;

                else
                    cost[0] = 0;

                add = 0;
                printf("$ Catering : 1,000 TK (per guest)          -> ");
                scanf("%d", &add);

                if(add==1)
                    cost[1] = 1000*guest;

                else
                    cost[1] = 0;

                add = 0;
                printf("$ Ceiling Decoration : 50,000 TK           -> ");
                scanf("%d", &add);

                if(add==1)
                    cost[2] = 50000;

                else
                    cost[2] = 0;

                add = 0;
                printf("$ Entrance Gate Decoration : 10,000 TK     -> ");
                scanf("%d", &add);

                if(add==1)
                    cost[3] = 10000;

                else
                    cost[3] = 0;

                add = 0;
                printf("$ Photography & Cinematography : 5,000 TK  -> ");
                scanf("%d", &add);

                if(add==1)
                    cost[4] = 5000;

                else
                    cost[4] = 0;

                add = 0;
                printf("$ Stage Decoration : 50,000 TK             -> ");
                scanf("%d", &add);

                if(add==1)
                    cost[5] = 50000;

                else
                    cost[5] = 0;

                add = 0;
                printf("$ Music Band : 80,000 TK                   -> ");
                scanf("%d", &add);

                if(add==1)
                    cost[6] = 80000;

                else
                    cost[6] = 0;

                int total = 80000 + budget(cost, 0, 7);

                system("cls");

                system("color D7");

                printf("Here we go! Your event has been BOOKED.\n\n\n");

                printf("************************************************\n");
                printf("  Name           : %s %s\n", d.f_name, d.l_name);
                printf("  Contact no     : +88 0 %lld\n", contact);
                printf("  Event Category : ");
                puts(eve_t);
                printf("  Event Name     : ");
                puts(eve_n);
                if(ext!=" ")
                printf("  Event Topic    : %s\n", ext);
                else
                    printf("\n");
                printf("  Location       : %s\n", d.locate);
                printf("  Program Date   : %s\n", d.date);
                printf("  Program Time   : %s\n", d.time);
                printf("************************************************\n\n");

                printf("************************************************\n");
                printf("  Subjective Decor             : 80000 TK\n");
                printf("  Cake                         : %d TK\n", cost[0]);
                printf("  Catering                     : %d TK\n", cost[1]);
                printf("  Ceiling Decor                : %d TK\n", cost[2]);
                printf("  Entrance Gate Decor          : %d TK\n", cost[3]);
                printf("  Photography & Cinematography : %d TK\n", cost[4]);
                printf("  Stage Decor                  : %d TK\n", cost[5]);
                printf("  Music Band                   : %d TK\n", cost[6]);
                printf("  -------------------------------------------\n");
                printf("  Total Event Cost             : %d TK\n", total);
                printf("************************************************\n\n\n");

                char sample;
                printf("Would you like to view a sample photo of our stage decor?\n");
                printf("[press 'y' to see the sample] > ");
                fflush(stdin);
                scanf("%c", &sample);

                system("cls");

                if(sample == 'y' && sample!=EXIT)
                {
                    system("C:/Users/muhta/Desktop/Gallery/wedding-stage-decorations-M32D5P.jpg");

                    sleep(5);
                }

                printf("*-------------------------*\n");
                printf("|   BOOK ANOTHER EVENT?   |\n");
                printf("*-------------------------*\n\n");

                char agree;
                printf("Would you like to book another event(y/n)?\n->");
                fflush(stdin);
                scanf("%c", &agree);

                system("cls");

                if(agree==EXIT)
                {
                    system("cls");
                    printf("Contact us for further discussion.\n\n\n");

                    thanks();
                    return 0;
                }
                }
                while('c');

        }
        else if(YES==EXIT)
        {
            return 0;
        }

        else
            printf("Please press only 'y' to proceed or 'n' to exit the program.\n");
    }
}

int budget(int price[], int i, int n)
{
    if(i>=n)
    {
        return 0;
    }
    else
    {
        return (price[i] + budget(price, i+1, n));
    }
}

void thanks(void)
{
    printf(" **********************************************************************\n");
    printf(" *                   Contact us : +880 1746-137489                    *\n");
    printf(" *           Email Address: muhtadina.tasin@northsouth.edu            *\n");
    printf(" *                                                                    *\n");
    printf(" **********************************************************************\n\n");

    printf("                           HAVE A LOVELY DAY.\n\n");

    printf(" ttttttttt tt   tt  tttt  ttt     tt tt   tt    tt    tt  tttt  tt   tt\n");
    printf("    tt     tt   tt tt  tt tt tt   tt tt tt       tt  tt  tt  tt tt   tt\n");
    printf("    tt     ttttttt tttttt tt  tt  tt ttt          tttt   tt  tt tt   tt\n");
    printf("    tt     tt   tt tt  tt tt   tt tt tt tt         tt    tt  tt tt   tt\n");
    printf("    tt     tt   tt tt  tt tt     ttt tt   tt       tt     tttt   ttttt\n");

    printf("\n\n\n");
}
