#include <stdio.h>
#include <stdlib.h>
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

void startNewGame(){
    //for new game

    int numOfPlayers;
    char playerOne[10],playerTwo[10],str[10];
    //playerOne[0]=0;
    int diff,size;
    system("cls");
    printf("For begginer press 1\nFor expert press 2\n");
    label:
    scanf("%d",&diff);
    if(diff!=1 && diff!=2)
    {
        printf("Please enter a valid number: ");
        goto label;
    }

    //choose number of players
    system("cls");
    printf("One player:(Press 1)\nTwo players:(press 2)\n\n\n");
    label2:
    scanf("%d",&numOfPlayers);

    if(numOfPlayers==1)
    {
        printf("Please enter your name\n\n");
        scanf("%s",playerOne);
        //gets(playerOne);
        strcpy(str, "Computer");
        strcpy(playerTwo, str);
        system("cls");
    }
    else if(numOfPlayers==2)
    {
        printf("Please enter the name of the first player:\n");
        gets(playerOne);
        printf("Please enter the name of the second player:\n");
        gets(playerTwo);
        system("cls");
    }
    else
    {
        printf("Please enter a valid number: ");
        goto label2;
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
             dots[i][j]='\t';
         }
     }
     printf("\n\n");
     for(int i=0;i<size;i++)
     {printf("\t\t\t\t\t");
         for (int j=0;j<size;j++)
         {
             printf("%c" ,dots[i][j]);
         }printf("\n");}
         //game logic
         //defining the lines in the game and thier color
             char Hor1,Ver1,Hor2,Ver2;Hor1=254,Hor2=254,Ver1=254,Ver2=254;
             int noMoves;

             int row,column;
         //for 1 player vs computer
         if(numOfPlayers==1)
         {if(diff==1)//beginner//rows and columns must be diffrent not both even or not odd
         {noMoves=12;
         while(noMoves>0)
         {if(noMoves%2==0)//Players turn
         {printf("Enter the row of the point: ");
         scanf("%d", &row);
         printf("Enter the column of the point: ");
         scanf("%d", &column);
         /*if(row%2==0&&column%2==0||row%2==1&&column%2==1)
         {
             printf("Please enter a valid move");
             continue;*/
         //}else{//the move entered is valid
         if(row%2==1)
         {
           dots[row][column]=Hor1;
         }else{dots[row][column]=Ver1;}
         noMoves--;
         }else{//computers turn
         for(int i=0;i<size;i++)
         {
             for(int j=0;j<size;j++)
             {
                 if(dots[i][j]==' '&&i%2==0)
                 {
                     dots[i][j]=Ver2;
                 }else if(dots[i][j]==' '&&i%2==1)
                 {
                     dots[i][j]=Hor2;
                 }}}noMoves--;}}}}}