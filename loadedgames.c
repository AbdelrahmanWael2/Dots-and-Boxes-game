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
            if(x=='\0'){printf("No saved game here");goto d;}
            else
            {
                gameFile=fopen("savedGame1.txt","r");
                fscanf(gameFile,"%d",&size);
                fscanf(gameFile,"\n");
                fscanf(gameFile,"%d",&turn);
                fscanf(gameFile,"\n");
                fscanf(gameFile,"%d",&noPlayers);
                fscanf(gameFile,"\n");
                fscanf(gameFile,"%d",&noMoves);
                fscanf(gameFile,"\n");
                fscanf(gameFile,"%d",&score1);
                fscanf(gameFile,"\n");
                fscanf(gameFile,"%d",&score2);
                fscanf(gameFile,"\n");
                fscanf(gameFile,"%s",&playerOne);
                fscanf(gameFile,"\n");
                fscanf(gameFile,"%s",&playerTwo);
                fscanf(gameFile,"\n");
                //int array[size][size],array1[size][size],array2[size][size];
                for(int i=0;i<size;i++)
                {
                    for(int j=0;j<size;j++){fscanf(gameFile,"%d",&array[i][j]);fscanf(gameFile," ");}
                }
                fscanf(gameFile,"\n");
                for(int i=0;i<size;i++)
                {
                    for(int j=0;j<size;j++){fscanf(gameFile,"%d",&array1[i][j]);fscanf(gameFile," ");}
                }
                fscanf(gameFile,"\n");
                for(int i=0;i<size;i++)
                {
                    for(int j=0;j<size;j++){fscanf(gameFile,"%d",&array2[i][j]);fscanf(gameFile," ");}
                }
            }
        }
        if(game==2)
        {
            FILE *gameFile;
            gameFile=fopen("savedGame2.txt","r");
            fscanf(gameFile,"%c",&x);
            fclose(gameFile);
            if(x=='\0'){printf("No saved game here");goto d;}
            else
            {
                gameFile=fopen("savedGame2.txt","r");
                fscanf(gameFile,"%d",&size);
                fscanf(gameFile,"\n");
                fscanf(gameFile,"%d",&turn);
                fscanf(gameFile,"\n");
                fscanf(gameFile,"%d",&noPlayers);
                fscanf(gameFile,"\n");
                fscanf(gameFile,"%d",&noMoves);
                fscanf(gameFile,"\n");
                fscanf(gameFile,"%d",&score1);
                fscanf(gameFile,"\n");
                fscanf(gameFile,"%d",&score2);
                fscanf(gameFile,"\n");
                fscanf(gameFile,"%s",&playerOne);
                fscanf(gameFile,"\n");
                fscanf(gameFile,"%s",&playerTwo);
                fscanf(gameFile,"\n");
                //int array[size][size],array1[size][size],array2[size][size];
                for(int i=0;i<size;i++)
                {
                    for(int j=0;j<size;j++){fscanf(gameFile,"%d",&array[i][j]);fscanf(gameFile," ");}
                }
                fscanf(gameFile,"\n");
                for(int i=0;i<size;i++)
                {
                    for(int j=0;j<size;j++){fscanf(gameFile,"%d",&array1[i][j]);fscanf(gameFile," ");}
                }
                fscanf(gameFile,"\n");
                for(int i=0;i<size;i++)
                {
                    for(int j=0;j<size;j++){fscanf(gameFile,"%d",&array2[i][j]);fscanf(gameFile," ");}
                }
            }

        }
        if(game==3)
        {
            FILE *gameFile;
            gameFile=fopen("savedGame3.txt","r");
            fscanf(gameFile,"%c",&x);
            fclose(gameFile);
            if(x=='\0'){printf("No saved game here");goto d;}
            else
            {
                gameFile=fopen("savedGame3.txt","r");
                fscanf(gameFile,"%d",&size);
                fscanf(gameFile,"\n");
                fscanf(gameFile,"%d",&turn);
                fscanf(gameFile,"\n");
                fscanf(gameFile,"%d",&noPlayers);
                fscanf(gameFile,"\n");
                fscanf(gameFile,"%d",&noMoves);
                fscanf(gameFile,"\n");
                fscanf(gameFile,"%d",&score1);
                fscanf(gameFile,"\n");
                fscanf(gameFile,"%d",&score2);
                fscanf(gameFile,"\n");
                fscanf(gameFile,"%s",&playerOne);
                fscanf(gameFile,"\n");
                fscanf(gameFile,"%s",&playerTwo);
                fscanf(gameFile,"\n");
                //int array[size][size],array1[size][size],array2[size][size];
                for(int i=0;i<size;i++)
                {
                    for(int j=0;j<size;j++){fscanf(gameFile,"%d",&array[i][j]);fscanf(gameFile," ");}
                }
                fscanf(gameFile,"\n");
                for(int i=0;i<size;i++)
                {
                    for(int j=0;j<size;j++){fscanf(gameFile,"%d",&array1[i][j]);fscanf(gameFile," ");}
                }
                fscanf(gameFile,"\n");
                for(int i=0;i<size;i++)
                {
                    for(int j=0;j<size;j++){fscanf(gameFile,"%d",&array2[i][j]);fscanf(gameFile," ");}
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
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                if(array1[i][j]==1 || array2[i][j]==1){active[i][j]=passive[i][j];}
            }
        }
        int turnArray[60];
        system("cls");
        system("color 07");
        time_t start, end;
        float sec=0.0;
        int min=0;
        start=time(NULL);
        //two player
        if(noPlayers==2)
        {
            int counter=0, counter2=0;int i=0, j=0;
            while(noMoves>=0)
            {
                system("cls");
                printf("\e[0;34mPlayer 1 : %s \t\t\t\t\t\t\t\t\t\t\e[0;31mPlayer 2: %s", playerOne, playerTwo );
                printf("\n");
                printf("\e[0;34mPlayer 1 score : %d \t\t\t\t\t\t\t\t\t\e[0;31mPlayer 2 score : %d",score1,score2);
                printf("\n");
                printf("\e[0;32mFor undo choose -1 for row and -1 for col");
                printf("\n");
                printf("For redo choose -2 for row and -2 for col");
                printf("\n");
                printf("To save game choose -3 for row and -3 for col");
                printf("\n");
                printf("\t\t\t\t\e[0;32mMoves left: %d\t\ttime %d:%.0f",noMoves,min,sec);
                printf("\n\n");
                printf("\t\t\t\t\t\t");
                for(int i=0;i<size;i++){printf("\e[0;32m%d   ",i);}
                printf("\n");
                for(int i=0;i<size;i++)
                {
                    printf("\t\t\t\t\t\e[0;32m%d",i);
                    printf("\t");
                    for (int j=0;j<size;j++)
                    {
                        if(array1[i][j]==1)
                        {
                            if(i%2==1 && j%2==1)
                            {
                                active[i][j]=passive[i][j];
                                //printf("\e[0;34m%c",active[i][j]);
                                printf(" ");
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
                                    //printf("\e[0;31m%c",active[i][j]);
                                    printf(" ");
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
                    int temprow1, tempcol1, tempcol2, temprow2;int stor1[20], stor2[20], stoc1[20], stoc2[20];
                    if(turn==0)
                    {
                        label4:
                        printf("\e[0;34mPlayer one turn\n");
                        printf("\e[0;34mEnter number of row: \n");
                        scanf("%d",&row);
                        printf("\e[0;34mEnter number of column: \n");
                        scanf("%d",&col);
                        if(row==-3 && col==-3){saveGame(size,0,2,noMoves,score1,score2,playerOne,playerTwo,array,array1,array2, turnArray, counter,stor2, stoc2);goto endGame;}
                        //undo for player 2
                        if(row==-1 && col==-1)
                        {
                            if(counter2<=0){printf("There's nothing to Undo\n");goto reread;}
                            else
                            {
                                j--;temprow2=stor2[j];tempcol2=stoc2[j];array2[temprow2][tempcol2]=0;array[temprow2][tempcol2]=0;
                                if(temprow2%2==1 && tempcol2%2==0){active[temprow2][tempcol2]='\0';}   //reset line to space
                                else{active[temprow2][tempcol2]='\t';}
                                noMoves++;counter2--;goto label5;
                            }
                        }
                        else{stor1[i]=row; stoc1[i]=col;i++;}
                        if((row>size || col>size) || (row<0 || col<0) || (row%2==0 && col%2==0) ||(row%2==1 && col%2==1) || array[row][col]==1 )
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
                        if(row==-3 && col==-3){saveGame(size,1,2,noMoves,score1,score2,playerOne,playerTwo,array,array1,array2, turnArray, counter, stor2, stoc2);goto endGame;}
                        //undo for player 1
                        if(row==-1 && col==-1)
                        {
                            if(counter<=0){printf("There's nothing to Undo\n");goto reread;}
                            else
                            {
                                i--;temprow1=stor1[i];tempcol1=stoc1[i];array1[temprow1][tempcol1]=0;array[temprow1][tempcol1]=0;
                                if(temprow1%2==1 && tempcol1%2==0){active[temprow1][tempcol1]='\0';}   //reset line to space
                                else{active[temprow1][tempcol1]='\t';}
                                noMoves++;goto label6;counter--;
                            }
                        }
                        else{stor2[j]=row;stoc2[j]=col;j++;}
                        if( (row>size || col>size) || (row<0 || col<0) || (row%2==0 && col%2==0) ||(row%2==1 && col%2==1) || array[row][col]==1 )
                        {
                            printf("Please enter valid numbers\n");
                            goto reread;
                        }
                        counter2++;
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
                end=time(NULL);
                sec=difftime(end,start);
                if(sec>=60)
                {
                    min=sec/60;
                    sec=sec-min*60;
                }
            }


            if(score1>score2)
            {
                printf("END GAME THE WINNER IS \e[0;34m%s\n",playerOne);
                checkRank(score1,playerOne);
            }
            else
            {
                if(score2>score1)
                {
                    printf("END GAME THE WINNER IS \e[0;31m%s\n",playerTwo);
                    checkRank(score2,playerTwo);
                }
                else
                {
                    printf("END GAME NO WINNER\n");
                    checkRank(score1,playerOne);
                    checkRank(score2,playerTwo);
                }
            }
            endGame:
            fflush(stdin);
            int loop;
            printf("\e[0;32mTo main menu press 1\nExit press 2\n");
            scanf("%d",&loop);
            if(loop!=1 && loop!=2 &&loop!=3)
            {
                printf("Please enter a valid number: ");
                goto endGame;
            }
            if(loop==1)
            {
                system("cls");
                main();
            }
            if(loop==3)
            {
                system("cls");
                leaderBoared();
            }
            if(loop==2)exit(-1);

        }
        else
        {
            int counter=0, counter2=0;int i=0, j=0;
            time_t start, end;
            float sec=0.0;
            int min=0;
            start=time(NULL);
            while(noMoves>=0)
            {
                system("cls");
                printf("\e[0;34mPlayer 1 : %s \t\t\t\t\t\t\t\t\t\t\e[0;31mPlayer 2: %s", playerOne, playerTwo );
                printf("\n");
                printf("\e[0;34mPlayer 1 score : %d \t\t\t\t\t\t\t\t\t\e[0;31mPlayer 2 score : %d",score1,score2);
                printf("\n");
                printf("\e[0;32mFor undo choose -1 for row and -1 for col");
                printf("\n");
                printf("For redo choose -2 for row and -2 for col");
                printf("\n");
                printf("To save game choose -3 for row and -3 for col");
                printf("\n");
                printf("\t\t\t\t\e[0;32mMoves left: %d\t\ttime %d:%.0f",noMoves,min,sec);
                printf("\n\n");
                printf("\t\t\t\t\t\t");
                for(int i=0;i<size;i++){printf("\e[0;32m%d   ",i);}
                printf("\n");
                for(int i=0;i<size;i++)
                {
                    printf("\t\t\t\t\t\e[0;32m%d",i);
                    printf("\t");
                    for (int j=0;j<size;j++)
                    {
                        if(array1[i][j]==1)
                        {
                            if(i%2==1 && j%2==1)
                            {
                                active[i][j]=passive[i][j];
                                //printf("\e[0;34m%c",active[i][j]);
                                printf(" ");
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
                                    //printf("\e[0;31m%c",active[i][j]);
                                    printf(" ");
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

                reread1:
                fflush(stdin);
                if(noMoves>0)
                {
                    int temprow1, tempcol1, tempcol2, temprow2;int stor1[20], stor2[20], stoc1[20], stoc2[20];
                    if(turn==0)
                    {

                        printf("\e[0;34mPlayer one turn\n");
                        printf("\e[0;34mEnter number of row: \n");
                        scanf("%d",&row);
                        printf("\e[0;34mEnter number of column: \n");
                        scanf("%d",&col);
                        if(row==-3 && col==-3){saveGame(size,0,2,noMoves,score1,score2,playerOne,playerTwo,array,array1,array2, turnArray, counter, stor2, stoc2);goto endGame1;}
                        //undo for player 2
                        if(row==-1 && col==-1)
                        {
                            if(counter2<=0){printf("There's nothing to Undo\n");goto reread1;}
                            else
                            {
                                j--;temprow2=stor2[j];tempcol2=stoc2[j];array2[temprow2][tempcol2]=0;array[temprow2][tempcol2]=0;
                                if(temprow2%2==1 && tempcol2%2==0){active[temprow2][tempcol2]='\0';}   //reset line to space
                                else{active[temprow2][tempcol2]='\t';}
                                noMoves++;counter2--;goto label51;
                            }
                        }
                        else{stor1[i]=row; stoc1[i]=col;i++;}
                        if((row>size || col>size) || (row<0 || col<0) || (row%2==0 && col%2==0) ||(row%2==1 && col%2==1) || array[row][col]==1 )
                        {
                            printf("Please enter valid numbers\n");
                            goto reread;
                        }

                        counter++;
                        score1=checkScore(score1,row,col,size,array,&turn,array1);
                        array1[row][col]=1;
                        array[row][col]=1;
                        noMoves--;
                        label51:
                        active[row][col]=passive[row][col];
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
                end=time(NULL);
                sec=difftime(end,start);
                if(sec>=60)
                {
                    min=sec/60;
                    sec=sec-min*60;
                }
            }


            if(score1>score2)
            {
                printf("END GAME THE WINNER IS \e[0;34m%s\n",playerOne);
                checkRank(score1,playerOne);
            }
            else
            {
                if(score2>score1)
                {
                    printf("END GAME THE WINNER IS \e[0;31m%s\n",playerTwo);
                    checkRank(score2,playerTwo);
                }
                else
                {
                    printf("END GAME NO WINNER\n");
                    checkRank(score1,playerOne);
                    checkRank(score2,playerTwo);
                }
            }
            endGame1:
            fflush(stdin);
            int loop;
            printf("\e[0;32mTo main menu press 1\nExit press 2\n");
            scanf("%d",&loop);
            if(loop!=1 && loop!=2 && loop!=3)
            {
                printf("Please enter a valid number: ");
                goto endGame;
            }
            if(loop==1)
            {
                system("cls");
                main();
            }
            if(loop==3)
            {
                system("cls");
                leaderBoared();
            }
            if(loop==2)exit(-1);

        }


    }
}



