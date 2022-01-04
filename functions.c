#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#include <ctype.h>
#include <string.h>

#include "my_headers.h"

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
                   // passive[row][col-1]=219;
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
                    //passive[row][col-1]=219;
                }
                if(array[row][col+2]==1 && array[row-1][col+1]==1 && array[row+1][col+1]==1)
                {
                    score++;
                    //change++;
                    change=1;
                    arrayPlayer[row][col+1]=1;
                   // passive[row][col+1]=219;
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

int checkScoreUndo(int score, int row, int col ,int size, int array[size][size],int arrayPlayer[size][size],char active[size][size])
{
    int change=0;
    if(row%2==0 && col%2==1)
    {
        if(row==0)
        {
            if(array[row+2][col]==1 && array[row+1][col-1]==1 && array[row+1][col+1]==1)
            {
                score--;
                change=1;
                //*change++;
                arrayPlayer[row+1][col]=0;
                active[row+1][col]='\t';
            }
        }
        else
        {
            if(row==size-1)
            {
                if(array[row-2][col]==1 && array[row-1][col-1]==1 && array[row-1][col+1]==1)
                {
                    score--;
                    //*change++;
                    change=1;
                    arrayPlayer[row-1][col]=0;
                    active[row-1][col]='\t';
                }
            }
            else
            {
                if(array[row-2][col]==1 && array[row-1][col-1]==1 && array[row-1][col+1]==1)
                {
                    score--;
                    //*change++;
                    change=1;
                    arrayPlayer[row-1][col]=0;
                    active[row-1][col]='\t';
                }
                if(array[row+2][col]==1 && array[row+1][col-1]==1 && array[row+1][col+1]==1)
                {
                    score--;
                    //*change++;
                    change=1;
                    arrayPlayer[row+1][col]=0;
                    active[row+1][col]='\t';

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
                score--;
                //*change++;
                change=1;
                arrayPlayer[row][col+1]=0;
                active[row][col+1]='\t';
            }
        }
        else
        {
            if(col==size-1)
            {
                if(array[row][col-2]==1 && array[row-1][col-1]==1 && array[row+1][col-1]==1)
                {
                    score--;
                    //*change++;
                    change=1;
                    arrayPlayer[row][col-1]=0;
                    active[row][col-1]='\t';
                }
            }
            else
            {
                if(array[row][col-2]==1 && array[row-1][col-1]==1 && array[row+1][col-1]==1)
                {
                    score--;
                    //*change++;
                    change=1;
                    arrayPlayer[row][col-1]=0;
                    active[row][col-1]='\t';
                }
                if(array[row][col+2]==1 && array[row-1][col+1]==1 && array[row+1][col+1]==1)
                {
                    score--;
                    //*change++;
                    change=1;
                    arrayPlayer[row][col+1]=0;
                    active[row][col+1]='\t';
                }
            }
        }
    }
    //turn=!turn;
    return score;
}

void redo1(int *score1, int *score2 ,int counter,int stor[60],int stoc[60],int size,  int array2[size][size], int array1[size][size], int array[size][size], char active[size][size], int turn,  int removedline[60], int undos, char passive[size][size])
{  int row , col;
    row=stor[counter];col=stoc[counter];
   if(removedline[undos-1]==1)
   {

       *score1=checkScore(*score1, row, col, size, array, &turn, array1);
       array1[row][col]=1;array[row][col]=1;
        if(row%2==1 && col%2==0)/*vertical*/{active[row][col]=186;}   //reset line to space
        else{active[row][col]=205;}
    }


    if(removedline[undos-1]==2)
    {
        *score2=checkScore(*score2, row, col, size, array, &turn, array2);
        array2[row][col]=1;array[row][col]=1;
        if(row%2==1 && col%2==0)/*vertical*/{active[row][col]=186;}   //reset line to space
        else{active[row][col]=205;}
    }
        if(array[row][col]==1){active[row][col]=passive[row][col];}

}


void redo2(int *score1, int *score2, int counter, int size, int array[size][size], int array1[size][size], int array2[size][size], char active[size][size], int stor[60], int stoc[60], int turn, char passive[size][size], int removedline[60], int undos)
{
    int row , col;
    row=stor[counter];col=stoc[counter];

    if(removedline[undos-1]==1)
    {
        *score1=checkScore(*score1, row, col, size, array, &turn, array1);
        array1[row][col]=1;array[row][col]=1;
       if(row%2==1 && col%2==0)/*vertical*/{active[row][col]=186;}   //reset line to space
       else{active[row][col]=205;}
    }



   if(removedline[undos-1]==2)
    {
        *score2=checkScore(*score2, row, col, size, array, &turn, array2);
        array2[row][col]=1;array[row][col]=1;
        if(row%2==1 &&col%2==0)/*vertical*/{active[row][col]=186;}   //reset line to space
        else{active[row][col]=205;}
    }



     //if(array[row][col]==1){active[row][col]=passive[row][col];}

}


void  undo1(int *score1, int *score2 ,int counter,int stor[60],int stoc[60],int size,  int array2[size][size], int array1[size][size], int array[size][size], char active[size][size],   int removedline[60], int undos)
{   int temprow, tempcol;



        temprow=stor[counter-1];tempcol=stoc[counter-1];
        if(array1[temprow][tempcol]==1)//removing line and boxes from player 1
        {
            removedline[undos] = 1;
            *score1= checkScoreUndo(*score1,temprow,tempcol,size,array,array1,active);
            array1[temprow][tempcol]=0;array[temprow][tempcol]=0;

             if(temprow%2==1 && tempcol%2==0)/*vertical*/{active[temprow][tempcol]='\0';}   //reset line to space
                    else{active[temprow][tempcol]='\t';}}


        if(array2[temprow][tempcol]==1)
        {
             removedline[undos] = 2;
            *score2= checkScoreUndo(*score2,temprow,tempcol,size,array,array2,active);
             array2[temprow][tempcol]=0;array[temprow][tempcol]=0;

             if(temprow%2==1 && tempcol%2==0)/*vertical*/{active[temprow][tempcol]='\0';}   //reset line to space
                    else{active[temprow][tempcol]='\t';}}




}



void undo2(int size, int *score1, int *score2, int array1[size][size], int array2[size][size], int stor[60], int stoc[60], int counter, int array[size][size], char active[size][size], int removedline[60], int undos)
{
    //int a=1, b=2;
    int row, col;
    row=stor[counter-1];
    col=stoc[counter-1];
    if(array1[row][col]==1)
    {
        removedline[undos] = 1;
        *score1= checkScoreUndo(*score1,row,col,size,array,array1,active);
    }
    if(array2[row][col]==1)
    {
        removedline[undos] = 2;
        *score2= checkScoreUndo(*score2,row,col,size,array,array2,active);
    }
    array1[row][col]=0;
    array2[row][col]=0;
    array[row][col]=0;
    if(row%2==1 && col%2==0){active[row][col]='\0';}
    else
    {
        active[row][col]='\t';
    }
}






























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




void saveGame(int size,int turn,int noPlayers,int noMovesLeft,int score1,int score2,char player1[10],char player2[10] ,int array[size][size], int array1[size][size], int array2[size][size], int turnArray[60], int counter, int stor[60], int stoc[60])
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
        fprintf(savedGame,"\n");
        for(int j=0;j<60;j++){fprintf(savedGame,"%d ",turnArray[j]);}
        fprintf(savedGame,"\n");
        fprintf(savedGame,"%d",counter);
        fprintf(savedGame,"\n");
        for(int j=0;j<60;j++){fprintf(savedGame,"%d ",stor[j]);}
        fprintf(savedGame,"\n");
        for(int j=0;j<60;j++){fprintf(savedGame,"%d ",stoc[j]);}

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
            fprintf(savedGame,"\n");
            for(int j=0;j<60;j++){fprintf(savedGame,"%d ",turnArray[j]);}
            fprintf(savedGame,"\n");
            fprintf(savedGame,"%d",counter);
            fprintf(savedGame,"\n");
            for(int j=0;j<60;j++){fprintf(savedGame,"%d ",stor[j]);}
            fprintf(savedGame,"\n");
            for(int j=0;j<60;j++){fprintf(savedGame,"%d ",stoc[j]);}

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
                fprintf(savedGame,"\n");
                for(int j=0;j<60;j++){fprintf(savedGame,"%d ",turnArray[j]);}
                fprintf(savedGame,"\n");
                fprintf(savedGame,"%d",counter);
                fprintf(savedGame,"\n");
                for(int j=0;j<60;j++){fprintf(savedGame,"%d ",stor[j]);}
                fprintf(savedGame,"\n");
                for(int j=0;j<60;j++){fprintf(savedGame,"%d ",stoc[j]);}

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
            sortArray(scoreArray,nameArray);
            put=1;
            goto label;
        }
    }
    for(int i=0;i<1;i++)
    {
        if(scoreArray[i]<score)
        {
            scoreArray[i]=score;
            strcpy(nameArray[i],playerName);
            put=1;
            goto label;
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
