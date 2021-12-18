#include <stdio.h>
#include <stdlib.h>
#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"
#define BLKB "\e[40m"
#define REDB "\e[41m"
#define GRNB "\e[42m"
#define YELB "\e[43m"
#define BLUB "\e[44m"
#define MAGB "\e[45m"
#define CYNB "\e[46m"
#define WHTB "\e[47m"
#include <windows.h>
#define BLKB "\e[40m"
#define REDB "\e[41m"
#define GRNB "\e[42m"
#define YELB "\e[43m"
#define BLUB "\e[44m"
#define MAGB "\e[45m"
#define CYNB "\e[46m"
#define WHTB "\e[47m"
#include <ctype.h>
#include <string.h>



int main()

{while(1){    int flag;;int numOfPlayers;char playerOne[10],playerTwo[10],str[10];
//for main menu
    system("color 04"   );
    printf("\t\t\t\t\t\tDots and boxes\n\n\nNew game(Press 1):\nLoad Game(Press 2):\nLeaderboards(Press 3):\nExit Game(Press 4):\n\n");


    //main menu selection list
    int newGame=0,loadGame=0,leaderBoards=0,exitGame=0;
    scanf("%d",&flag);
    if(flag==1)
    {
        newGame=1;
    }
    if(flag==2)
    {
        loadGame=1;
    }
    if(flag==3)
    {
        leaderBoards=1;
    }
    if(flag==4)
    {
        exitGame=1;
    }
    //for new game
    if(newGame==1)
    {   int diff,size;
        system("cls");
        printf("For begginer press 1\nFor expert press 2\n");
        scanf("%d",&diff);


        system("cls");
        printf("One player:(Press 1)\nTwo players:(press 2)\n\n\n");
        scanf("%d",&numOfPlayers);
        fflush(stdin);
        if(numOfPlayers==1)
        {

            system("color 02");
        printf("\e[0;34mPlease enter your name\n\n\e[0;34m");
        gets(playerOne);
        strcpy(str, "Computer");
        strcpy(playerTwo, str);
        system("cls");

        }
        else if(numOfPlayers==2)
        {
            system("color 02");
            printf("\e[0;34mPlease enter the name of the first player:\n\e[0;34m");
            gets(playerOne);
            printf("\e[0;34mPlease enter the name of the second player:\n\e[0;34m");
            gets(playerTwo);

            system("cls");
        }else{
        printf("\e[0;34menter a valid number");break;

        }
        system("cls");
        //displaying the names of the players
        printf("Player 1: %s\t\t\t\t\t", playerOne);printf("Player 2: %s", playerTwo);

        //dispaying the board
        system("color 74");
        if(diff==1)
        {
            size=5;
        }else{size=12;}
         char dots[size][size];
         for(int i=0;i<size;i++)
         {
             for (int j=0;j<size;j++)
             {
                 if(i%2==0&&j%2==0)
                 {
                     dots[i][j]=254;
                 }else
                 dots[i][j]=' ';
             }
         }
         printf("\n\n");
         for(int i=0;i<size;i++)
         {printf("\t\t\t\t\t");
             for (int j=0;j<size;j++)
             {
                 printf("%c" ,dots[i][j]);
             }printf("\n");}
                break;






        }



}
    return 0;}








