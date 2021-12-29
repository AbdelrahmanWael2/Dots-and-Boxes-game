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
            if(array[row+2][col]==1 && array[row+1][col-1]==1 && array[row+1][col+1]==1)
            {
                score++;
                change=1;
                //change++;
                arrayPlayer[row+1][col]=1;
            }
        }
        else
        {
            if(row==size-1)
            {
                if(array[row-2][col]==1 && array[row-1][col-1]==1 && array[row-1][col+1]==1)
                {
                    score++;
                    //change++;
                    change=1;
                    arrayPlayer[row-1][col]=1;
                }
            }
            else
            {
                if(array[row-2][col]==1 && array[row-1][col-1]==1 && array[row-1][col+1]==1)
                {
                    score++;
                    //change++;
                    change=1;
                    arrayPlayer[row-1][col]=1;
                }
                if(array[row+2][col]==1 && array[row+1][col-1]==1 && array[row+1][col+1]==1)
                {
                    score++;
                    //change++;
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
            if(array[row][col+2]==1 && array[row-1][col+1]==1 && array[row+1][col+1]==1)
            {
                score++;
                //change++;
                change=1;
                arrayPlayer[row][col+1]=1;
            }
        }
        else
        {
            if(col==size-1)
            {
                if(array[row][col-2]==1 && array[row-1][col-1]==1 && array[row+1][col-1]==1)
                {
                    score++;
                    //change++;
                    change=1;
                    arrayPlayer[row][col-1]=1;
                }
            }
            else
            {
                if(array[row][col-2]==1 && array[row-1][col-1]==1 && array[row+1][col-1]==1)
                {
                    score++;
                    //change++;
                    change=1;
                    arrayPlayer[row][col-1]=1;
                }
                if(array[row][col+2]==1 && array[row-1][col+1]==1 && array[row+1][col+1]==1)
                {
                    score++;
                    //change++;
                    change=1;
                    arrayPlayer[row][col+1]=1;
                }
            }

        }

    }
    if(change==1){*turn=!*turn;}
    /*if(change==2)
    {
        *turn=!*turn;
        arrayPlayer[row][col]=0;
        array[row][col]=2;
    }*/
    return score;
}

void saveGame(int size,int turn,int noPlayers,int noMovesLeft,int score1,int score2,char player1[10],char player2[10] ,int array[size][size], int array1[size][size], int array2[size][size])
{
    FILE *savedGame;
    char x,y,z;
    savedGame= fopen("savedGame1.txt","r");
    fscanf(savedGame,"%c",&x);
    if(x=='\0')
    {
        save1:
        savedGame=fopen("savedGame1.txt","w");
        fprintf(savedGame,"%d",size);
        fprintf(savedGame,"\n");
        fprintf(savedGame,"%d",turn);
        fprintf(savedGame,"\n");
        fprintf(savedGame,"%d",noPlayers);
        fprintf(savedGame,"\n");
        fprintf(savedGame,"%d",noMovesLeft);
        fprintf(savedGame,"\n");
        fprintf(savedGame,"%d",score1);
        fprintf(savedGame,"\n");
        fprintf(savedGame,"%d",score2);
        fprintf(savedGame,"\n");
        fprintf(savedGame,"%s",player1);
        fprintf(savedGame,"\n");
        fprintf(savedGame,"%s",player2);
        fprintf(savedGame,"\n");
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++){fprintf(savedGame,"%d ",array[i][j]);}

        }
        fprintf(savedGame,"\n");
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++){fprintf(savedGame,"%d ",array1[i][j]);}

        }
        fprintf(savedGame,"\n");
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++){fprintf(savedGame,"%d ",array2[i][j]);}

        }

    }
    else
    {
        fclose(savedGame);
        savedGame= fopen("savedGame2.txt","r");
        fscanf(savedGame,"%c",&y);
        if(y=='\0')
        {
            save2:
            savedGame=fopen("savedGame2.txt","w");
            fprintf(savedGame,"%d",size);
            fprintf(savedGame,"\n");
            fprintf(savedGame,"%d",turn);
            fprintf(savedGame,"\n");
            fprintf(savedGame,"%d",noPlayers);
            fprintf(savedGame,"\n");
            fprintf(savedGame,"%d",noMovesLeft);
            fprintf(savedGame,"\n");
            fprintf(savedGame,"%d",score1);
            fprintf(savedGame,"\n");
            fprintf(savedGame,"%d",score2);
            fprintf(savedGame,"\n");
            fprintf(savedGame,"%s",player1);
            fprintf(savedGame,"\n");
            fprintf(savedGame,"%s",player2);
            fprintf(savedGame,"\n");
            for(int i=0;i<size;i++)
            {
                for(int j=0;j<size;j++){fprintf(savedGame,"%d ",array[i][j]);}

            }
            fprintf(savedGame,"\n");
            for(int i=0;i<size;i++)
            {
                for(int j=0;j<size;j++){fprintf(savedGame,"%d ",array1[i][j]);}

            }
            fprintf(savedGame,"\n");
            for(int i=0;i<size;i++)
            {
                for(int j=0;j<size;j++){fprintf(savedGame,"%d ",array2[i][j]);}

            }

        }
        else
        {
            fclose(savedGame);
            savedGame= fopen("savedGame3.txt","r");
            fscanf(savedGame,"%c",&z);
            if(z=='\0')
            {
                save3:
                savedGame=fopen("savedGame3.txt","w");
                fprintf(savedGame,"%d",size);
                fprintf(savedGame,"\n");
                fprintf(savedGame,"%d",turn);
                fprintf(savedGame,"\n");
                fprintf(savedGame,"%d",noPlayers);
                fprintf(savedGame,"\n");
                fprintf(savedGame,"%d",noMovesLeft);
                fprintf(savedGame,"\n");
                fprintf(savedGame,"%d",score1);
                fprintf(savedGame,"\n");
                fprintf(savedGame,"%d",score2);
                fprintf(savedGame,"\n");
                fprintf(savedGame,"%s",player1);
                fprintf(savedGame,"\n");
                fprintf(savedGame,"%s",player2);
                fprintf(savedGame,"\n");
                for(int i=0;i<size;i++)
                {
                    for(int j=0;j<size;j++){fprintf(savedGame,"%d ",array[i][j]);}
                }
                fprintf(savedGame,"\n");
                for(int i=0;i<size;i++)
                {
                    for(int j=0;j<size;j++){fprintf(savedGame,"%d ",array1[i][j]);}
                }
                fprintf(savedGame,"\n");
                for(int i=0;i<size;i++)
                {
                    for(int j=0;j<size;j++){fprintf(savedGame,"%d ",array2[i][j]);}
                }

            }
            else
            {
                int d;
                printf("There is no more place for additional saved games, please delete an old saved game\n");
                printf("To delete saved game 1 (press 1)\n");
                printf("To delete saved game 2 (press 2)\n");
                printf("To delete saved game 3 (press 3)\n");
                del:
                fflush(stdin);
                scanf("%d",&d);
                if(d!=1 && d!=2 && d!=3)
                {
                    printf("\nPlease enter valid nuber");
                    goto del;
                }
                else
                {
                    switch(d)
                    {
                        case 1 :
                            goto save1;
                            break;
                        case 2 :
                            goto save2;
                            break;
                        case 3 :
                            goto save3;
                            break;
                    }
                }
            }
        }
    }
}


void sortArray(int array[10], char nameArray[10][10])
{
    int temp;
    char tempChar[10];
    for(int i=0;i<9;i++)
    {
        int max=array[i];
        int maxorder=i;
        for(int j=i+1;j<10;j++)
        {
            if(max<array[j])
            {
                max=array[j];
                maxorder=j;
            }
        }
        temp=array[i];
        array[i]=max;
        array[maxorder]=temp;
        strcpy(tempChar,nameArray[i]);
        strcpy(nameArray[i],nameArray[maxorder]);
        strcpy(nameArray[maxorder],tempChar);
    }
}


void checkRank(int score, char playerName[10])
{
    FILE *rankFile;
    char tempName[10],nameArray[10][10];
    int scoreArray[10], put=0;
    rankFile=fopen("rank.txt","r");
    for(int i=0;i<10;i++)
    {
        fscanf(rankFile,"%d",&scoreArray[i]);
        fscanf(rankFile,"\t");
        fscanf(rankFile,"%s",&tempName);
        strcpy(nameArray[i],tempName);
        fscanf(rankFile,"\n");
    }
    fclose(rankFile);
    for(int i=0;i<10;i++)
    {
        if(strcmp(playerName,nameArray[i])==0)
        {
            if(score>scoreArray[i])
            {
                scoreArray[i]=score;
                sortArray(scoreArray,nameArray);
                put=1;
                goto label;
            }
            else{goto label;}
        }
    }

    for(int i=0;i<10;i++)
    {
        if(scoreArray[i]==0)
        {
            scoreArray[i]=score;
            strcpy(nameArray[i],playerName);
            put=1;
            break;
        }
    }
    for(int i=0;i<1;i++)
    {
        if(scoreArray[i]<score)
        {
            scoreArray[i]=score;
            strcpy(nameArray[i],playerName);
            put=1;
            break;
        }
    }
    label:
    if(put==1)
    {
        printf("WELL DONE! NEW HIGH SCORE\n");
        rankFile=fopen("rank.txt","w");
        for(int i=0;i<10;i++){fprintf(rankFile,"%d\t%s\n",scoreArray[i],nameArray[i]);}
        fclose(rankFile);
        printf("To see your new rank press 3\n");

    }
}
