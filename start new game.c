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
#include <windows.h>
#include "my_headers.h"

void setToZero(int size, int arr[size][size])
{

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            arr[i][j]=0;
        }
    }
}


int checkScore(int score, int row, int col ,int size, int array[size][size],int *turn,int arrayPlayer[size][size])
{
    int change=0;
    if(row%2==0 && col%2==1)
    {
        if(row==0)
        {
            if(array[row+2][col]==1&&array[row+1][col-1]==1&&array[row+1][col+1]==1)
            {
                score++;
                change=1;
                arrayPlayer[row+1][col]=1;
            }
        }
        else
        {
            if(row==size-1)
            {
                if(array[row-2][col]==1&&array[row-1][col-1]==1&&array[row-1][col+1]==1)
                {
                    score++;
                    change=1;
                    arrayPlayer[row-1][col]=1;
                }
            }
            else
            {
                if(array[row-2][col]==1&&array[row-1][col-1]==1&&array[row-1][col+1]==1)
                {
                    score++;
                    change=1;
                    arrayPlayer[row-1][col]=1;
                }
                if(array[row+2][col]==1&&array[row+1][col-1]==1&&array[row+1][col+1]==1)
                {
                    score++;
                    change=1;
                    arrayPlayer[row+1][col]=1;
                }
            }
        }

    }
    if(row%2==1 && col%2==0)
    {
        if(col==0)
        {
            if(array[row][col+2]==1&&array[row-1][col+1]==1&&array[row+1][col+1]==1)
            {
                score++;
                change=1;
                arrayPlayer[row][col+1]=1;
            }
        }
        else
        {
            if(col==size-1)
            {
                if(array[row][col-2]==1&&array[row-1][col-1]==1&&array[row+1][col-1]==1)
                {
                    score++;
                    change=1;
                    arrayPlayer[row][col-1]=1;
                }
            }
            else
            {
                if(array[row][col-2]==1&&array[row-1][col-1]==1&&array[row+1][col-1]==1)
                {
                    score++;
                    change=1;
                    arrayPlayer[row][col-1]=1;
                }
                if(array[row][col+2]==1&&array[row-1][col+1]==1&&array[row+1][col+1]==1)
                {
                    score++;
                    change=1;
                    arrayPlayer[row][col+1]=1;
                }
            }

        }

    }
    if(change==1){*turn=!*turn;}
    return score;
}

//ONE players

void onePlayer(int noMoves,int size, char passive[size][size],char playerOne[10], char playerTwo[10])
{
    system("color 07");
    int array[size][size], array1[size][size], array2[size][size], score1=0, score2=0;
    setToZero(size,array);
    setToZero(size,array1);
    setToZero(size,array2);
    char active[size][size];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i%2==0&&j%2==0)
            {
                active[i][j]=254;
            }
            else
            {
                if(i%2==1 && j%2==0){active[i][j]='\0';}
                else
                {
                    active[i][j]='\t';
                }
            }

        }
    }
    int  row, col;
    int turn=0;
    while(noMoves>=0)
    {
        system("cls");
        printf("\e[0;34mPlayer 1 : %s \t\t\t\t\t\t\t\t\t\t\e[0;31mPlayer 2: %s", playerOne, playerTwo );
        printf("\n");
        printf("\e[0;34mPlayer 1 score : %d \t\t\t\t\t\t\t\t\t\e[0;31mPlayer 2 score : %d",score1,score2);
        printf("\n");
        printf("\t\t\t\t\t\t\e[0;32mMoves left: %d",noMoves);
        printf("\n\n");
        printf("\t\t\t\t\t");
        for(int i=0;i<size;i++){printf("\e[0;32m%d   ",i);}
        printf("\n");
        for(int i=0;i<size;i++)
        {
            printf("\t\t\t\t\e[0;32m%d",i);
            printf("\t");
            for (int j=0;j<size;j++)
            {
                if(array1[i][j]==1)
                {
                    if(i%2==1 && j%2==1)
                    {
                        active[i][j]=passive[i][j];
                        printf("\e[0;34m%c",active[i][j]);
                        printf("\e[0;34m%c",active[i][j]);
                        printf("\e[0;34m%c",active[i][j]);
                        printf("\e[0;34m%c",active[i][j]);
                        printf("\e[0;34m%c",active[i][j]);
                        printf("\e[0;34m%c ",active[i][j]);
                    }
                    else
                    {
                        if(i%2==0 && j%2==1)
                        {
                            printf("\e[0;34m%c" ,active[i][j]);
                            printf("\e[0;34m%c" ,active[i][j]);
                            printf("\e[0;34m%c" ,active[i][j]);
                            printf("\e[0;34m%c" ,active[i][j]);
                            printf("\e[0;34m%c" ,active[i][j]);
                            printf("\e[0;34m%c" ,active[i][j]);
                            printf("\e[0;34m%c" ,active[i][j]);
                        }
                        else
                        {
                            printf("\e[0;34m%c" ,active[i][j]);
                        }
                    }
                }
                else
                {
                    if(array2[i][j]==1)
                    {
                        if(i%2==1 && j%2==1)
                        {
                            active[i][j]=passive[i][j];
                            printf("\e[0;31m%c",active[i][j]);
                            printf("\e[0;31m%c",active[i][j]);
                            printf("\e[0;31m%c",active[i][j]);
                            printf("\e[0;31m%c",active[i][j]);
                            printf("\e[0;31m%c",active[i][j]);
                            printf("\e[0;31m%c ",active[i][j]);
                        }
                        else
                        {
                            if(i%2==0 && j%2==1)
                            {
                                printf("\e[0;31m%c" ,active[i][j]);
                                printf("\e[0;31m%c" ,active[i][j]);
                                printf("\e[0;31m%c" ,active[i][j]);
                                printf("\e[0;31m%c" ,active[i][j]);
                                printf("\e[0;31m%c" ,active[i][j]);
                                printf("\e[0;31m%c" ,active[i][j]);
                                printf("\e[0;31m%c" ,active[i][j]);
                            }
                            else
                            {
                                printf("\e[0;31m%c" ,active[i][j]);
                            }
                        }

                    }
                    else
                    {
                        printf("\e[0;32m%c" ,active[i][j]);
                    }
                }
            }
            printf("\n");
        }
        reread:
        fflush(stdin);
        if(noMoves>0)
        {
            if(turn==0)
            {
                printf("\e[0;34mPlayer one turn\n");
                printf("\e[0;34mEnter number of row: \n");
                scanf("%d",&row);
                printf("\e[0;34mEnter number of column: \n");
                scanf("%d",&col);
                if( (row>size || col>size) || (row<0 || col<0) || (row%2==0 && col%2==0) ||(row%2==1 && col%2==1) || array[row][col]==1 )
                {
                    printf("Please enter valid numbers\n");
                    goto reread;
                }
                score1=checkScore(score1,row,col,size,array,&turn,array1);
                array1[row][col]=1;
                array[row][col]=1;

                active[row][col]=passive[row][col];
                noMoves--;
                turn=!turn;
            }
            else
            {
                AI(size, array, &row, &col);
                score2=checkScore(score2,row,col,size,array,&turn,array2);
                array2[row][col]=1;
                array[row][col]=1;
                active[row][col]=passive[row][col];
                noMoves--;
                turn=!turn;
            }
        }
        else{break;}
    }


        if(score1>score2)
        {
            printf("END GAME THE WINNER IS \e[0;34m%s",playerOne);
        }
        else
        {
            if(score2>score1)
            {
                printf("END GAME THE WINNER IS \e[0;31m%s",playerTwo);
            }
            else
            {
                printf("END GAME NO WINNER");
            }
        }
}



//two players
void twoPlayers(int noMoves,int size, char passive[size][size],char playerOne[10], char playerTwo[10], int numOfPlayers)
{   int counter=0, counter2=0;int i=0, j=0;
    system("color 07");
    int array[size][size], array1[size][size], array2[size][size], score1=0, score2=0;
    setToZero(size,array);
    setToZero(size,array1);
    setToZero(size,array2);
    char active[size][size];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i%2==0&&j%2==0)
            {
                active[i][j]=254;
            }
            else
            {
                if(i%2==1 && j%2==0){active[i][j]='\0';}
                else
                {
                    active[i][j]='\t';
                }
            }

        }
    }
    int  row, col;
    int turn=0;
    while(noMoves>=0)
    {
        system("cls");
        printf("\e[0;34mPlayer 1 : %s \t\t\t\t\t\t\t\t\t\t\e[0;31mPlayer 2: %s", playerOne, playerTwo );
        printf("\n");
        printf("\e[0;34mPlayer 1 score : %d \t\t\t\t\t\t\t\t\t\e[0;31mPlayer 2 score : %d",score1,score2);
        printf("\n");
        printf("For undo choose -1 for row and -1 for col");
        printf("\n");
        printf("\t\t\t\t\t\t\e[0;32mMoves left: %d",noMoves);
        printf("\n\n");
        printf("\t\t\t\t\t");
        for(int i=0;i<size;i++){printf("\e[0;32m%d   ",i);}
        printf("\n");
        for(int i=0;i<size;i++)
        {
            printf("\t\t\t\t\e[0;32m%d",i);
            printf("\t");
            for (int j=0;j<size;j++)
            {
                if(array1[i][j]==1)
                {
                    if(i%2==1 && j%2==1)
                    {
                        active[i][j]=passive[i][j];
                        printf("\e[0;34m%c",active[i][j]);
                        printf("\e[0;34m%c",active[i][j]);
                        printf("\e[0;34m%c",active[i][j]);
                        printf("\e[0;34m%c",active[i][j]);
                        printf("\e[0;34m%c",active[i][j]);
                        printf("\e[0;34m%c ",active[i][j]);
                    }
                    else
                    {
                        if(i%2==0 && j%2==1)
                        {
                            printf("\e[0;34m%c" ,active[i][j]);
                            printf("\e[0;34m%c" ,active[i][j]);
                            printf("\e[0;34m%c" ,active[i][j]);
                            printf("\e[0;34m%c" ,active[i][j]);
                            printf("\e[0;34m%c" ,active[i][j]);
                            printf("\e[0;34m%c" ,active[i][j]);
                            printf("\e[0;34m%c" ,active[i][j]);
                        }
                        else
                        {
                            printf("\e[0;34m%c" ,active[i][j]);
                        }
                    }
                }
                else
                {
                    if(array2[i][j]==1)
                    {
                        if(i%2==1 && j%2==1)
                        {
                            active[i][j]=passive[i][j];
                            printf("\e[0;31m%c",active[i][j]);
                            printf("\e[0;31m%c",active[i][j]);
                            printf("\e[0;31m%c",active[i][j]);
                            printf("\e[0;31m%c",active[i][j]);
                            printf("\e[0;31m%c",active[i][j]);
                            printf("\e[0;31m%c ",active[i][j]);
                        }
                        else
                        {
                            if(i%2==0 && j%2==1)
                            {
                                printf("\e[0;31m%c" ,active[i][j]);
                                printf("\e[0;31m%c" ,active[i][j]);
                                printf("\e[0;31m%c" ,active[i][j]);
                                printf("\e[0;31m%c" ,active[i][j]);
                                printf("\e[0;31m%c" ,active[i][j]);
                                printf("\e[0;31m%c" ,active[i][j]);
                                printf("\e[0;31m%c" ,active[i][j]);
                            }
                            else
                            {
                                printf("\e[0;31m%c" ,active[i][j]);
                            }
                        }

                    }
                    else
                    {
                        printf("\e[0;32m%c" ,active[i][j]);
                    }
                }
            }
            printf("\n");
        }



        reread:
        fflush(stdin);
        if(noMoves>0)
        {   int temprow1, tempcol1, tempcol2, temprow2;int stor1[6], stor2[6], stoc1[6], stoc2[6];
            if(turn==0)
            {   label4:
                printf("\e[0;34mPlayer one turn\n");
                printf("\e[0;34mEnter number of row: \n");
                scanf("%d",&row);
                printf("\e[0;34mEnter number of column: \n");
                scanf("%d",&col);                                                       //temprow2=row;tempcol2=col;
                //undo for player 2
                if(row==-1 && col==-1){
                if(counter2<=0){printf("There's nothing to Undo\n");goto reread;}
                else{j--;temprow2=stor2[j];tempcol2=stoc2[j];array2[temprow2][tempcol2]=0;array[temprow2][tempcol2]=0;
                if(temprow2%2==1 && tempcol2%2==0){active[temprow2][tempcol2]='\0';}   //reset line to space
                else{active[temprow2][tempcol2]='\t';}
                noMoves++;counter2--;goto label5;}
                }else{stor1[i]=row; stoc1[i]=col;i++;} if((row>size || col>size) || (row<0 || col<0) || (row%2==0 && col%2==0) ||(row%2==1 && col%2==1) || array[row][col]==1 )
                {
                    printf("Please enter valid numbers\n");
                    goto reread;
                }

                counter++;
                score1=checkScore(score1,row,col,size,array,&turn,array1);
                array1[row][col]=1;
                array[row][col]=1;
                noMoves--;
                label5:
                active[row][col]=passive[row][col];
                turn=!turn;
            }
            else
            {
                printf("\e[0;31mPlayer two turn\n");
                printf("\e[0;31mEnter number of row: ");
                scanf("%d",&row);
                printf("\e[0;31mEnter number of column: ");
                scanf("%d",&col);

                //undo for player 1
                if(row==-1 && col==-1){
                if(counter<=0){printf("There's nothing to Undo\n");goto reread;}
                else{i--;temprow1=stor1[i];tempcol1=stoc1[i];array1[temprow1][tempcol1]=0;array[temprow1][tempcol1]=0;
                if(temprow1%2==1 && tempcol1%2==0){active[temprow1][tempcol1]='\0';}   //reset line to space
                else{active[temprow1][tempcol1]='\t';}
                noMoves++;goto label6;counter--;}}else{stor2[j]=row;stoc2[j]=col;j++;}



                if( (row>size || col>size) || (row<0 || col<0) || (row%2==0 && col%2==0) ||(row%2==1 && col%2==1) || array[row][col]==1 )
                {
                    printf("Please enter valid numbers\n");
                    goto reread;
                }counter2++;
                score2=checkScore(score2,row,col,size,array,&turn,array2);
                array2[row][col]=1;
                array[row][col]=1;
                noMoves--;
                label6:
                active[row][col]=passive[row][col];

                turn=!turn;
            }
        }
        else{break;}
    }


        if(score1>score2)
        {
            printf("END GAME THE WINNER IS \e[0;34m%s",playerOne);
        }
        else
        {
            if(score2>score1)
            {
                printf("END GAME THE WINNER IS \e[0;31m%s",playerTwo);
            }
            else
            {
                printf("END GAME NO WINNER");
            }
        }
}

void startNewGame()
{
    //for new game
    int numOfPlayers;
    char playerOne[10],playerTwo[10],str[10]="computer";
    int diff,size;
    system("cls");
    printf("For begginer press 1\nFor expert press 2\n");
    label:
    fflush(stdin);
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
    fflush(stdin);
    scanf("%d",&numOfPlayers);

    if(numOfPlayers==1)
    {
        printf("Please enter your name\n\n");
        scanf("%s",playerOne);
        //gets(playerOne);
        strcpy(playerTwo, str);
        system("cls");
    }
    else if(numOfPlayers==2)
    {
        printf("Please enter the name of the first player:\n");
        scanf("%s",playerOne);
        /*int i=0;
        while(playerOne[i]!='\n')
            {gets(playerOne);i++;}*/
        printf("Please enter the name of the second player:\n");
        scanf("%s",playerTwo);

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
    if(diff==1)
    {
        size=5;
    }
    else{size=11;}

    int noMoves;
    if(size==5){noMoves=12;}
    else{noMoves=60;}

    //passive game board

    char passive[size][size],h=205,v=186,b=219;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i%2==0 && j%2==1)
            {
                passive[i][j]=h;
            }
            if(i%2==1 && j%2==0)
            {
                passive[i][j]=v;
            }
            if(i%2==1 && j%2==1)
            {
                passive[i][j]=b;
            }
        }
    }
    if(numOfPlayers==2){twoPlayers(noMoves,size, passive, playerOne, playerTwo, numOfPlayers);}
    if(numOfPlayers==1){onePlayer(noMoves,size, passive, playerOne, playerTwo);}
}
