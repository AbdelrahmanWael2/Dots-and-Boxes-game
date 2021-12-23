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
void loadedGames()
{
    system("cls");
    printf("Saved game 1 press 1\nSaved game 2 press 2\nSaved game 3 press 3\n");
    int game;
    d:

    fflush(stdin);
    scanf("%d",&game);
    if(game!=1 && game!=2 && game!=3)
    {
        printf("Please enter a valid number: ");
        goto d;
    }
    else
    {
        int size,noPlayers,noMoves,turn,score1,score2;
        char x;
        char playerOne[10],playerTwo[10];
        int array[11][11],array1[11][11],array2[11][11];

        if(game==1)
        {
            FILE *gameFile;
            gameFile=fopen("savedGame1.txt","r");
            fscanf(gameFile,"%c",&x);
            fclose(gameFile);
            if(x=='\0'){printf("No saved game here");}
            else
            {
                gameFile=fopen("savedGame1.txt","r");
                fscanf(gameFile,"%d\n",&size);
                fscanf(gameFile,"%d\n",&turn);
                fscanf(gameFile,"%d\n",&noPlayers);
                fscanf(gameFile,"%d\n",&noMoves);
                fscanf(gameFile,"%d\n",&score1);
                fscanf(gameFile,"%d\n",&score2);
                fscanf(gameFile,"%s\n",&playerOne);
                fscanf(gameFile,"%s\n",&playerTwo);
                //int array[size][size],array1[size][size],array2[size][size];
                for(int i=0;i<size;i++)
                {
                    for(int j=0;j<size;j++){fscanf(gameFile,"%d ",&array[i][j]);}
                }
                fscanf(gameFile,"\n");
                for(int i=0;i<size;i++)
                {
                    for(int j=0;j<size;j++){fscanf(gameFile,"%d ",&array1[i][j]);}
                }
                fscanf(gameFile,"\n");
                for(int i=0;i<size;i++)
                {
                    for(int j=0;j<size;j++){fscanf(gameFile,"%d ",&array2[i][j]);}
                }
            }

        }
            if(game==2)
                {
                int size,noPlayers,noMoves;
                char x;
                char playerOne[10],playerTwo[10];
                FILE *gameFile;
                gameFile=fopen("savedGame2.txt","r");
                fscanf(gameFile,"%c",&x);
                fclose(gameFile);
                if(x=='\0'){printf("No saved game here");}
                else
                {
                    gameFile=fopen("savedGame2.txt","r");
                    fscanf(gameFile,"%d\n",&size);
                    fscanf(gameFile,"%d\n",&turn);
                    fscanf(gameFile,"%d\n",&noPlayers);
                    fscanf(gameFile,"%d\n",&noMoves);
                    fscanf(gameFile,"%d\n",&score1);
                    fscanf(gameFile,"%d\n",&score2);
                    fscanf(gameFile,"%s\n",&playerOne);
                    fscanf(gameFile,"%s\n",&playerTwo);
                    //int array[size][size],array1[size][size],array2[size][size];
                    for(int i=0;i<size;i++)
                    {
                        for(int j=0;j<size;j++){fscanf(gameFile,"%d ",&array[i][j]);}
                    }
                    fscanf(gameFile,"\n");
                    for(int i=0;i<size;i++)
                    {
                        for(int j=0;j<size;j++){fscanf(gameFile,"%d ",&array1[i][j]);}
                    }
                    fscanf(gameFile,"\n");
                    for(int i=0;i<size;i++)
                    {
                        for(int j=0;j<size;j++){fscanf(gameFile,"%d ",&array2[i][j]);}
                    }
                }

            }
            if(game==3)
            {
                int size,noPlayers,noMoves;
                char x;
                char playerOne[10],playerTwo[10];
                FILE *gameFile;
                gameFile=fopen("savedGame3.txt","r");
                fscanf(gameFile,"%c",&x);
                fclose(gameFile);
                if(x=='\0'){printf("No saved game here");}
                else
                {
                    gameFile=fopen("savedGame3.txt","r");
                    fscanf(gameFile,"%d\n",&size);
                    fscanf(gameFile,"%d\n",&turn);
                    fscanf(gameFile,"%d\n",&noPlayers);
                    fscanf(gameFile,"%d\n",&noMoves);
                    fscanf(gameFile,"%d\n",&score1);
                    fscanf(gameFile,"%d\n",&score2);
                    fscanf(gameFile,"%s\n",&playerOne);
                    fscanf(gameFile,"%s\n",&playerTwo);
                    //int array[size][size],array1[size][size],array2[size][size];
                    for(int i=0;i<size;i++)
                    {
                        for(int j=0;j<size;j++){fscanf(gameFile,"%d ",&array[i][j]);}
                    }
                    fscanf(gameFile,"\n");
                    for(int i=0;i<size;i++)
                    {
                        for(int j=0;j<size;j++){fscanf(gameFile,"%d ",&array1[i][j]);}
                    }
                    fscanf(gameFile,"\n");
                    for(int i=0;i<size;i++)
                    {
                        for(int j=0;j<size;j++){fscanf(gameFile,"%d ",&array2[i][j]);}
                    }
                }

            }
            int  row, col;
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
            for(int i=0;i<size;i++){
                for(int i=o)
            }

//one player saved game
        if(noPlayers==1)
        {
            system("cls");
            system("color 07");

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
                        if(row==-1 && col==-1){saveGame(size,1,noMoves,playerOne,playerTwo,array,array1,array2);goto endGame;}
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
                endGame:
                printf("To main menu press 1\nExit press 2\n");

            }
            else
            //two players
            {
                system("cls");
                system("color 07");
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



                    reread2:
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
                            if(row==-1 && col==-1){saveGame(size,0,1,noMoves,playerOne,playerTwo,array,array1,array2);goto endGame2;}

                            if( (row>size || col>size) || (row<0 || col<0) || (row%2==0 && col%2==0) ||(row%2==1 && col%2==1) || array[row][col]==1 )
                            {
                                printf("Please enter valid numbers\n");
                                goto reread2;
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
                            printf("\e[0;31mPlayer two turn\n");
                            printf("\e[0;31mEnter number of row: ");
                            scanf("%d",&row);
                            printf("\e[0;31mEnter number of column: ");
                            scanf("%d",&col);
                            if(row==-1 && col==-1){saveGame(size,1,1,noMoves,playerOne,playerTwo,array,array1,array2);goto endGame2;}
                            if( (row>size || col>size) || (row<0 || col<0) || (row%2==0 && col%2==0) ||(row%2==1 && col%2==1) || array[row][col]==1 )
                            {
                                printf("Please enter valid numbers\n");
                                goto reread2;
                            }
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
                    endGame2:
                        printf("To main menu press 1\nExit press 2\n");
            }

    }
}














