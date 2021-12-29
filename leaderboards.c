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
void leaderBoared()
{
    system("cls");
    FILE *rankFile;
    int scoreArray[10];
    char tempName[10],nameArray[10][10];
    rankFile=fopen("rank.txt","r");
    for(int i=0;i<10;i++)
    {
        fscanf(rankFile,"%d",&scoreArray[i]);
        fscanf(rankFile,"\t");
        fscanf(rankFile,"%s",&tempName);
        strcpy(nameArray[i],tempName);
        fscanf(rankFile,"\n");
    }

    for(int i=0;i<10;i++){printf("%d\t%s\n",scoreArray[i],nameArray[i]);}
    int i;
    label:
    fflush(stdin);
    printf("To main menu press 1\nTo Exit press 2\n");
    scanf("%d",&i);
    if(i!=1 && i!=2)
    {
        printf("Please enter a valid number\n");
        goto label;

    }
    if(i==1)
    {
        system("cls");
        main();
    }
    if(i==2)exit(-1);


}
