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

#include "my_headers.h"

int startGame(int newGame,int loadGame,int leaderBoards,int exitGame)
{
    //for main menu

    system("color f5");
    printf("\t\t\t\t\t\tDots and boxes\n\n\nNew game(Press 1):\nLoad Game(Press 2):\nLeaderboards(Press 3):\nExit Game(Press 4):\n\n");

    //main menu selection list
    int flag;
    label:
    scanf("%d",&flag);
    if(flag>4 || flag<1)
    {
        printf("Please enter a valid number: ");
        goto label;
    }
    return flag;
}



int main()
{
    int newGame=0,loadGame=0,leaderBoards=0,exitGame=0;
    int flag=startGame(newGame,loadGame,leaderBoards,exitGame);
    if(flag==1)startNewGame();
    return 0;
}
